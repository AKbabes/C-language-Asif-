#include<stdio.h>
int year(int a){
    if(a%4 == 0 && a%100 != 0 || a%400 == 0)
    printf("Year is Leap year.\n");
    else
    printf("Year is normal.\n");
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    year(a);
    return 0;
}
