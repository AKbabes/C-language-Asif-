/**
#include <stdio.h>
int main(){
    int a,b,c,d;
    char ch1='.' , ch2='-' ;
    scanf("%d%c%d%c%d%c%d",&a,&ch1,&b,&ch1,&c,&ch2,&d);
    printf("%.3d\n",a);
    printf("%.3d\n",b);
    printf("%.3d\n",c);
    printf("%.2d\n",d);
return 0;
}
*/
#include<stdio.h>
int main(){
    int i,n,num;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        if(num>0 && num%2==0)
        printf("EVEN POSITIVE\n");
        else if(num>0 && num%2==1)
        printf("ODD POSITIVE\n");
        else if(num<0 && num%2==0)
        printf("EVEN NEGATIVE\n");
        else if(num<0 && num%2==-1)
        printf("ODD NEGATIVE\n");
        else if(num==0)
        printf("NULL\n");
    }
return 0;
}
