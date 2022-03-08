#include<stdio.h>
int main(){
    int i,num,alc=0,gas=0,des=0;
    printf("MUITO OBRIGADO\n");
    for(i=0;i<100;i++){
        scanf("%d",&num);
        if(num>=1 && num<=3){
            if(num==1)
                alc++;
            else if(num==2)
                gas++;
            else if(num==3)
                des++;
        }
        else if(num==4)
            break;
    }
    printf("Alcool: %d\nGasoline: %d\nDiesel: %d\n",alc,gas,des);

return 0;
}
