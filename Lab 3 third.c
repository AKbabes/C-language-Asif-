#include <stdio.h>
#include<string.h>
struct player{
    char name[50];
    char club[50];
    int jersy,age ;
};
void viewinfo(struct player *ptr){
    for(int i=1 ; i<=3 ;i++ ){
        printf("Player ")
        printf(" %s\t",ptr->name);
        printf("\t%s\t\t",ptr->club);
        printf("%d",ptr->jersy);
        printf("\t%d\n",ptr->age);
        ptr++;
    }
}
void collectinfo(){
    struct player arr[11];
    struct player *ptr=NULL ;
    ptr = arr ;
    for(int i=1 ; i<=3 ;i++ ){
        printf("enter the data of player %d :\n",i);
        printf("Enter the name- ");
        scanf("%s",&ptr->name);
        printf("Enter club name- ");
        scanf("%s",&ptr->club);
        printf("Enter the jersy number- ");
        scanf("%d",&ptr->jersy);
        printf("Enter age- ");
        scanf("%d",&ptr->age);
        ptr++ ;
    }
    ptr=arr;
    viewinfo(ptr);

}
int main(){
    collectinfo();
    return 0;
}


#include <stdio.h>
#include<string.h>
struct player{
    char name[50], club[50];
    int j_num,age,salary,extra_match,match_count ;
};
void display(struct player *ptr){
    int j;
    for(j=0 ; j<1 ;j++ ){
        printf("player name : %s\nClub: %s\n",ptr->name,ptr->club);
        printf("Jursey number: %d\nAge: %d\nDaily salary: %d Taka\n",ptr->j_num,ptr->age,ptr->salary);
        int b,m,y;
        ptr->salary = b;
        m = b*30;
        y = b*365 ;
        printf("Monthly salary: %d Taka\nYearly salary%d Taka\n",m,y);
        ptr++;
    }
}

void input(){
    struct player a[11];
    struct player *ptr=NULL ;
    ptr = a ;
    int i;
    for( i=0 ; i<1 ;i++ ){
        printf("enter the data of player num %d as given order : \nname->club->jersey number->age->per day salary\n",i+1);
        scanf("%s %s",ptr->name,ptr->club);
        scanf("%d %d %d",&ptr->j_num,&ptr->age,&ptr->salary);
        printf("how much salary do he gets for per external matches and how many match did he played in the whole year? ")
        scanf("%d",&pts->extra_match);

        ptr++ ;
    }
    ptr=a;
    display(ptr);

}



int main(){
    input();
    return 0;
}
