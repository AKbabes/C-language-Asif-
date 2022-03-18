#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
//#include<windows.h>
#include<ctype.h>
struct voter_info
{
    char name[30];
    char nid_no[20];
    char sex[10];
    char date_of_birth[15];
    char father_name[30];
    char mother_name[30];
    char password[10];
}voter,del;
struct candidate_info
{
    char name[30];
    char nid_no[20];
    char symbol[20];
    long long int VOTE;
    struct candidate_info *next;
}candidate,Del,*can=NULL;
struct voted_list
{
    char nid_no[20];
    struct voted_list *next;
}*voted=NULL;

FILE *fp;
FILE *fpc;
COORD coord= {0,0};
long long int vote[11]={0},total_vote=0,total_voter=0;

void gotoxy(x,y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(unsigned int mseconds)
{
    clock_t n = mseconds + clock();
    while (n > clock());
}
void welcome()
{
    gotoxy(30,4);
	printf("Welcome to digital voting system");
	gotoxy(35,6);
	printf("---------------------");
}

void admin()
{
    char n;
    system("cls");
	welcome();
	label1:

    gotoxy(22,15);
	printf("Enter the corresponding no");

	gotoxy(22,19);
	printf("1. Voter Registration");
	gotoxy(22,21);
	printf("2. Candidate Registration");
	gotoxy(22,23);
	printf("3. Delete from Voter List");
	gotoxy(22,25);
	printf("4. Delete from Candidate List");
	gotoxy(22,27);
	printf("5. Return to main menu");

	gotoxy(22,29);
	fflush(stdin);
	n=getch();
	switch(n)
	{

    case '1':
        {
            voter_reg();
            break;
        }

    case '2':
        {
           candedate_reg();
           break;
        }

    case '3':
        {
           delet_voter();
           break;
        }

    case '4':
        {
            delet_candidate();
            break;
        }

    case '5':
        {
           return;
        }

    default:
        {
            system("cls");
            welcome();
            gotoxy(22,11);
            printf("Wrong choice");
            gotoxy(22,13);
            printf("Retype choice");
            goto label1;
        }

	}
	system("cls");
	welcome();
	goto label1;
}

//Niliya
void voter_reg()
{
    char again;
    label1:
    system("cls");
    welcome();

    gotoxy(15,14);
    printf("Enter the Information of Voter:");
	gotoxy(15,16);
	printf("Name:");

	gotoxy(15,18);
	printf("NID No:");

	gotoxy(15,20);
	printf("Sex:");

	gotoxy(15,22);
	printf("Date of Birth:");

	gotoxy(15,24);
	printf("Father Name:");

	gotoxy(15,26);
	printf("Mother Name:");

	gotoxy(15,28);
	printf("Password:");

	fflush(stdin);
	gotoxy(30,16);
	gets(voter.name);
	strupr(voter.name);

	fflush(stdin);
	gotoxy(30,18);
	gets(voter.nid_no);


	gotoxy(30,20);
	fflush(stdin);
	gets(voter.sex);
	strupr(voter.sex);

	fflush(stdin);
	gotoxy(30,22);
	gets(voter.date_of_birth);


	gotoxy(30,24);
	fflush(stdin);
	gets(voter.father_name);
	strupr(voter.father_name);

	fflush(stdin);
	gotoxy(30,26);
	gets(voter.mother_name);
	strupr(voter.mother_name);

	fflush(stdin);
	gotoxy(30,28);
	gets(voter.password);
	if((fp=fopen("Voter","ab+"))==NULL)
    {
       printf(":: Cannot open the file.... ::");
       getch();
       exit(1);
    }
    fprintf(fp,"%s %s %s %s %s %s %s\n",voter.name,voter.nid_no,voter.sex,voter.date_of_birth,voter.father_name,voter.mother_name,voter.password);
    fclose(fp);
    gotoxy(15,31);
	printf("Enter '1' for next record(y/n):");
	again=getch();
	if(again=='1')
	{
		goto label1;
	}
	else
        return;
}//end of voter registration

void delet_voter()
{
    FILE *old,*newrec;
    int test=0;
    lebel1:
	system("cls");
	welcome();

    old=fopen("Voter","r+");
    newrec=fopen("new","ab+");
    gotoxy(22,15);
    printf("Enter the NID No. of the voter to delete: ");
    gets(del.nid_no);
    while(fscanf(old,"%s %s %s %s %s %s %s",&voter.name,&voter.nid_no,&voter.sex,&voter.date_of_birth,&voter.father_name,&voter.mother_name,&voter.password)!=EOF)
    {
        if(strcmp(voter.nid_no,del.nid_no)==0)
        {
            test++;
            gotoxy(27,20);
            printf(":: Record deleted successfully! ::");
        }
        else
            fprintf(newrec,"%s %s %s %s %s %s %s\n",voter.name,voter.nid_no,voter.sex,voter.date_of_birth,voter.father_name,voter.mother_name,voter.password);

   }
   fclose(old);
   fclose(newrec);
   remove("Voter");
   rename("new","Voter");

   if(test==0)
    {
        gotoxy(27,20);
        printf("::No Records Available::");
        gotoxy(22,23);
        printf("Enter '1' to try again : ");
        char n;
        n=getch();
        if(n=='1')
        {
            goto lebel1;
        }
        else
            return;
    }

    gotoxy(22,23);
    printf("Enter '1' to try again : ");
    char i=getch();
    if(i=='1')
    {
        goto lebel1;
    }
    else
        return;
}//end of delete

//Kishor
void candedate_reg()
{
    char again;
    label1:
    system("cls");
    welcome();

    gotoxy(15,14);
    printf("Enter the Information of Candidate:");
    gotoxy(15,16);
	printf("NID No:");

	gotoxy(15,18);
	printf("Name:");

	gotoxy(15,20);
	printf("Symbol:");


	fflush(stdin);
	gotoxy(25,16);
	gets(candidate.nid_no);

	fflush(stdin);
    gotoxy(25,18);
    gets(candidate.name);
    strupr(candidate.name);

    gotoxy(25,20);
    fflush(stdin);
    gets(candidate.symbol);
    strupr(candidate.symbol);
    if((fpc=fopen("Candidate","ab+"))==NULL)
    {
        printf("Cannot open the file....");
        getch();
        exit(1);
    }
    fprintf(fpc,"%s %s %s\n",candidate.nid_no,candidate.name,candidate.symbol);
    fclose(fpc);
    gotoxy(15,23);
    printf("Enter '1' for next record(y/n):");
    again=getch();
    if(again=='1')
    {
        goto label1;
    }
    else
        return;
}
//Habiba
void delet_candidate()
{
    FILE *old,*newrec;
    int test=0;
    lebel1:
	system("cls");
	welcome();

    old=fopen("Candidate","r+");
    newrec=fopen("new","ab+");
    gotoxy(22,15);
    printf("Enter the NID No. of the candidate to delete: ");
    gets(Del.nid_no);
    while(fscanf(old,"%s %s %s",&candidate.nid_no,&candidate.name,&candidate.symbol)!=EOF)
    {
        if(strcmp(candidate.nid_no,Del.nid_no)==0)
        {
            test++;
            gotoxy(27,20);
            printf(":: Record deleted successfully! ::");
        }
        else
    fprintf(newrec,"%s %s %s\n",candidate.nid_no,candidate.name,candidate.symbol);

   }
   fclose(old);
   fclose(newrec);
   remove("Candidate");
   rename("new","Candidate");

   if(test==0)
    {
        gotoxy(27,20);
        printf("::No Records Available::");
        gotoxy(22,23);
        printf("Enter '1' to try again : ");
        char n;
        n=getch();
        if(n=='1')
        {
            goto lebel1;
        }
        else
            return;
    }

    gotoxy(22,23);
    printf("Enter '1' to try again : ");
    char i=getch();
    if(i=='1')
    {
        goto lebel1;
    }
    else
        return;
}
