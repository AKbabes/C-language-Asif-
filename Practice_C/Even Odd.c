#include<stdio.h>
int check(int a){
    if(a%2==0)
    printf("Number is Even");
    else
    printf("Number is Odd");
    return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    check(a);
    return 0;
}
