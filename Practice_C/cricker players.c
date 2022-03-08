#include<stdio.h>
struct players{
    int age;
    char role[25];
    char name[25];
}arr[11];

void fun(){
  int i;
  printf("Enter players information as Name , Roles for the team , Age\n");
  for(i=0;i<=11;i++){
      scanf("%s %s %d",&arr[i].name,&arr[i].role,&arr[i].age);
  }
  printf("\nNAME\t\tROLES\t\tAGE\n");
  for(i=0;i<=11;i++){
      printf("%s\t\t%s\t\t%d\n",arr[i].name,arr[i].role,arr[i].age);
  }
}
int main(){
  fun();
  return 0;
}
