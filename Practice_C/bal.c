/*#include<stdio.h>
int main(){
    int i,j,k,n;
    long long int a,b,rem1,rev1,rem2,rev2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&a,&b);
        for(j=a;a!=0;j=j/10){
         rem1=a % 10;
         rev1=a*10+rem1;
        }
        printf("%lld",&rev1);
        for(k=b;b!=0;k=k/10){
         rem2=a % 10;
         rev2=a*10+rem2;
        }
        printf("%d",rev2);
    }
}
*/
#include<stdio.h>
int main(){
    long long num,xp,nxp;
    for(int i=1;i<=100;i++){
        scanf("%lld %lld",&num,&xp);
        if(num==0 && xp==0)
            break;
        else if(num!=0 && xp!=0){
            nxp=num*xp;
            printf("%lld\n",nxp);
        }
    }
return 0;
}
