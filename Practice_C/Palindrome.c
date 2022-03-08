#include<stdio.h>
int palindrome(int num){
    int x,revn=0,mainn;
    mainn=num;
    while(num!=0) {
        x=num%10;
        revn=revn*10+x;
        num=num/10;
    }
    if(mainn == revn)
        printf("This number is a palindrome.");
    else
        printf("This number is not a palindrome.");
    return 0;
}
int main(){
 int num,x,revn=0,mainn;
    scanf("%d", &num);
    palindrome(num);
    return 0;
}
