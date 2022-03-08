#include<stdio.h>
int main(){
    float time[100];
    int n,i=1,j;
    scanf("%d",&n);
    while(n!=EOF){
        float t,result;
        scanf("%f",&time[0]);
        result=time[0];
        for(j=1;j<n;j++){
            scanf("%f",&time[j]);
            if(result>time[j]){
                result=time[j];
            }
        }
        printf("%.2f\n",result);
    continue;
    }
}
