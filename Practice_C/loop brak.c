#include<stdio.h>
int main(){
    int i,n;
    for(i=1;i<=100;i++){
        scanf("%d",&n);
        if(n==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
            continue;
    }
return 0;
}
