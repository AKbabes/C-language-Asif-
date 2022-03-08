#include<stdio.h>

int main(){
int i,j,k,l,a,b,c,d,e,f;
for(i=0;i<10;i++){
    for(j=9;j>=0;j--)
    {
    printf("%d ",i--);
    }
    printf("\n");
    printf("%d\n",j);
    }
return 0;
}
