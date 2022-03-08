/**#include<stdio.h>
int main(){
    int i,n,mul;
    printf("enter a number-");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
    mul=n*i;
    printf("%d x %d=%d\n",n,i,mul);
    }
    //printf("the sum is-%d",sum);
    //avg=sum/10.0;
    //printf("\nand the average is-%f",avg);
}
*/
#include<stdio.h>
int main(){
    int i,x,y;
    for(i=1;i<=100;i++){
        scanf("%d %d",&x,&y);
        if(x!=y && x>y){
            printf("Decrescente\n");
        }
        else if(x!=y && x<y){
            printf("Crescente\n");
        }
        else if(x==y){
            break;
        }

    }
}
