#include<stdio.h>
int prime(int num){
    if(num==2)
    printf("Number is prime.");
    else if(num%2!=0)
    printf("Number is prime.");
    else
    printf("Number is not prime.");
return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    prime(num);
return 0;
}
