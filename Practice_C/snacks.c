#include<stdio.h>
int main(){
int p,amount;
scanf("%d %d",&p,&amount);
float a,b,c,d,e;
if(p==1){
    a= amount*4.00 ;
    printf("Total: R$ %.2f\n",a);
    }
else if(p==2){
    b= amount*4.50 ;
    printf("Total: R$ %.2f\n",b);
    }
else if(p==3){
    c= amount*5.00 ;
    printf("Total: R$ %.2f\n",c);
    }
else if(p==4){
    d= amount*2.00 ;
    printf("Total: R$ %.2f\n",d);
    }
else if(p==5){
    e= amount*1.50 ;
    printf("Total: R$ %.2f\n",e);
}
return 0;
}
