/**#include<stdio.h>
int main(){
int i=1,n,num;
scanf("%d",&n);
while(i<10000){
    num= (i%n)==2;
    printf("%d",num);
    i++ ;
    }
return 0;
}

#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10000;i++)
        if (i%n==2)
        printf ("%d\n",i);
    return 0;
}
*/
#include<stdio.h>
int main(){
int a=10,b=20;
for(a=10;a<20;a=a+ a++)
    printf("%d",a);

}

//Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.

#include<stdio.h>
int main(){
    int x,y,mod;
    scanf("%d %d",&x,&y);
    int i=x;
        while(i<=y)
        mod=i%13!=0;
        mod+=1;
        printf("%d",mod);
        i++;
    return 0;
}
