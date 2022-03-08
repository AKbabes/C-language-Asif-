#include<stdio.h>
int main(){
int i,j,k,n,a,b,rem1,rem2,rev1=0,rev2=0,sum1,sum2;
scanf("%d",&n);
for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        sum1=a+b;
        for(j=a;a!=0;a=a/10){
         rem1=a % 10;
         rev1=rev1*10+rem1;
         }
         //printf("%d\n",rev1);
         for(k=b;b!=0;b=b/10){
         rem2=b % 10;
         rev2=rev2*10+rem2;
        }
        sum2=rev1+rev2;
        //printf("%d\n",rev2);
        if(sum1 == sum2)
            printf("YES\n");
        else
            printf("NO\n");
    }
return 0;
}
