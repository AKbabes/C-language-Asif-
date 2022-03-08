#include<stdio.h>
int main(){
int a,b,temp;
while(scanf("%d %d",&a,&b) != EOF){
    if(a<b){
    temp=a;
    a=b;
    b=temp;
    printf("%d\n",a-b);
    }
    else{
    printf("%d\n",a-b);
    }
}
}
