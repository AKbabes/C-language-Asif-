#include<stdio.h>
int main(){
    int i,n,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("1");
        scanf("%d",&z);
        for(int j=1;j<=z;j++){
            printf("0");
        }
        printf("\n");
    }
return 0;
}
