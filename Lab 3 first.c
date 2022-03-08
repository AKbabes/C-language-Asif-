#include <stdio.h>
#include <stdlib.h>
typedef struct Employee{
    char name[100];
    int nid;
    int age;
    char occup[50];
    float account;
} Emp;

void collectinfo(Emp *emp);
void viewinfo(Emp emp[]);
int n = 10;
int main(){
    Emp emp[n];
    for(int i = 0; i < n; i++){
        collectinfo(&emp[i]);
    }
    viewinfo(emp);
    return 0;
}
void collectinfo(Emp *emp){
    printf("Enter the name of an employee: ");
    fflush(stdin);
    scanf("%[^\n]s", emp->name);
    printf("Enter NID number: ");
    fflush(stdin);
    scanf("%d", &emp->nid);
    printf("Enter age: ");
    fflush(stdin);
    scanf("%d", &emp->age);
    printf("Enter occupation: ");
    fflush(stdin);
    scanf("%[^\n]s", emp->occup);
    printf("Enter account balance: ");
    fflush(stdin);
    scanf("%f", &emp->account);
    printf("\n");
}
void viewinfo(Emp emp[]){
    float intrest, ac_balance, sev_balance;
    printf("\n\nEMPLOYEE INFO...\n\n");
    printf("\tName\t\tNID\tAge\tOccupation\tBalance\tInterest\tAnnual Interest\tBalance after 7 years\n\n");

    for(int i = 0; i < n; i++){
        intrest = emp[i].account*(6.5/100);
        ac_balance = emp[i].account + intrest*12;
        sev_balance = ac_balance + (intrest*12)*7;
        printf(" \t%-10s", emp[i].name);
        printf("\t%d", emp[i].nid);
        printf("\t%d", emp[i].age);
        printf("\t%-15s", emp[i].occup);
        printf("\t%.2f", emp[i].account);
        printf("\t %.2f", intrest);
        printf("\t\t%.2f", ac_balance);
        printf("\t\t %.2f\n", sev_balance);
    }

}
