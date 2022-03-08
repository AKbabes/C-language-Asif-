#include<stdio.h>
#include<stdlib.h>
typedef struct patient{
    char patientName[30];
    int patientID;
    char patientBG[5];
    struct patient * next;
} ptnt;

typedef struct donaer{
    char donerName[30];
    int donerID;
    char donerBG[5];
    char donerAddress[100];
    int donerMobile;
    char madicalreport[2];
    struct doner * next;
} dnr;

ptnt* HeadofPatient= NULL, *tempPatient=NULL;
dnr* HeadofDoner = NULL, *tempDoner=NULL;
int emt = 0, em=0;
int emt2 = 1;

void creatPatientList();
void creatDonerList();
void Display();
void displayDoner();
void displayPatient();

void Display(){
printf("\n||**\tDaffodil International University Blood Donation Club\t**||\n");
printf("\t     ** CSE Building, Dhanmondi 32, Dhaka **\n");
printf("\t\t   Contact No. 01752757188\n\n");
}

void creatDonerList(){
    dnr* Newnode = (dnr*) malloc (sizeof(dnr));

    Newnode->next=NULL;
    printf("\nName : ");
    gets(Newnode->donerName);
    gets(Newnode->donerName);
    printf("\nBlood Group : ");
    gets(Newnode->donerBG);
    printf("\nDoner Address : ");
    gets(Newnode->donerAddress);
    printf("\nMedical report(yes/no) : ");
    gets(Newnode->madicalreport);
    printf("\nMobile :");
    scanf("%d", &Newnode->donerMobile);
    printf("\nStudent ID :");
    scanf("%d", &Newnode->donerID);

    if(HeadofDoner==NULL){
        HeadofDoner = tempDoner = Newnode;
        }
    else{
        tempDoner->next = Newnode;
        tempDoner = Newnode;
        }
}
void creatPatientList(){
    ptnt* Newnode = (ptnt*) malloc (sizeof(ptnt));
    Newnode->next=NULL;
    printf("\nName: ");
    gets(Newnode->patientName);
    gets(Newnode->patientName);
    printf("\nBlood group: ");
    gets(Newnode->patientBG);
    printf("\nStudent ID:");
    scanf("%d", &Newnode->patientID);
    if(HeadofPatient==NULL){
        HeadofPatient = tempPatient = Newnode;
    }
    else{
        tempPatient->next = Newnode;
        tempPatient = Newnode;
    }
}

void displayDoner(){
    int count = 1;
    dnr * p = HeadofDoner;
    while (p!= NULL){

        printf("\nDONER %d :\nName : %s",count, p->donerName);
        printf("\nBlood Group : %s",p->donerBG);
        printf("\nDoner Address : %s",p->donerAddress);
        printf("\nMedical report : %s",p->madicalreport);
        printf("\nMobile : %d",p->donerMobile);
        printf("\nStudent ID : %d",p->donerID);
        printf("\n\n");
        count++;
        p= p-> next;
    }
    return;
}
void displayPatient(){
    int count = 1;
    ptnt * p = HeadofPatient;
    while (p!= NULL){

        printf("\nPatient %d:\nName: %s",count, p->patientName);
        printf("\nBlood group: %s", p->patientBG);
        printf("\nId: %d", p->patientID);
        printf("\n\n");
        count++;
        p= p-> next;
    }
    p = NULL;

    return;
}

int main(){
    int a;
    home:
    Display();
    printf("\t  Please Select an Option :\n\n");
    printf("Press [ 1 ] if You are a DONER.\n");
    printf("Press [ 2 ] if You are a PATIENT.\n");
    printf("Press [ 3 ] for View the LIST.\n");
    printf("4.About This Project\n");
    printf("5.Exit\n");
    scanf("%d",&a);

    if(a==1){
        int x;
        back:
            printf("\nPress [ 1 ] To add DONER\n[ 2 ] Back\n");
            scanf("%d",&x);
            if(x== 1){
                int a=0;
                printf("How many doner do you want to add?\n");
                scanf("%d",&a);
                for(int i=1; i<=a; i++){
                    if(x==1){
                        printf("Enter your data first -\n");
                    }
                    else{
                        printf("Enter data of DONER - %d",i);
                    }
                    creatDonerList();
                }
                printf("**Successfully added**\n");
                goto home;
            }
            else if(x==2){
                goto home;
            }
            else{
                printf("You entered wrong digit.\n");
                goto back;
            }
        }
        else if(a==2){
        int x=0;
            printf("Press [ 1 ] to add PATIENT\n Press [ 3 ] Back\n");
            scanf("%d",&x);
            if(x==1){
                int a;
                printf("How many patient do you want to add?\n");
                scanf("%d",&a);
                for(int i=1; i<=a; i++){

                    if(x==1){
                        printf("Enter your data-\n");
                    }
                    else{
                        printf("Enter data of patient %d",i);
                    }

                    creatPatientList();
                }
                printf("Successfully added\n");
                emt = 0;
                goto home;
            }
            else if(x==3){
                goto home;
            }
            else{
                printf("You entered wrong digit.\n");
                goto home;
            }
    }
    else if(a==3){
        int x=0,z=0;
        back3:
        printf("Which list do you want to see?\n Press [ 1 ] for PATIENT. \n Press [ 2 ] for DONER.\n 4.Back.\n");
        scanf("%d",&x);
        if (x==1){
            if( emt == 1 ){
                printf("\n**No Information Here...\n");

                printf("\n\t**Press any key to back**");
                getch();
                goto back;
            }
            else{
                displayPatient();
                printf("\n**Press any key to back**");
                getch();
                goto back3;

            }
        }
        else if (x == 2){

            displayDoner();
            printf("\n**Press any key to back**");
            getch();
            goto back3;
        }
    }
}

