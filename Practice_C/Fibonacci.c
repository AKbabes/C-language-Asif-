#include<stdio.h>
int fibonacci(int num){
int a=0,b=1,next;
    next=a + b;
    printf("%d %d 1",a,b);
    for(int i=3;i<=10;++i){
    a = b;
    b = next;
    next = a+b;
    printf(" %d",next);
  }
return 0;
}
int main(){
    int num,a=0,b=1,next;
    fibonacci(num);
return 0;
}
