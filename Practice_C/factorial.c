#include<stdio.h>
int factorial(int a){
    int fac=1;
    for(int i=1;i<=a;i++){
        fac=fac*i;
    }
    printf("Factorial is - %d",fac);
return 0;
}
int main(){
    int a;
    scanf("%d",&a);
    factorial(a);
return 0;
}
