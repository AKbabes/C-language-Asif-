#include<stdio.h>
int main(){
    int n,run,count=0,o_run,score;
    for(int j=1;j<=50;j++){
    scanf("%d",&n);
    for(int i=1;i<=n*6;i++){
        scanf("%d",&run);
        count=count+run;
        o_run=count/n;
        score=o_run*50;
        printf("%d\n",score);
    }
    }
return 0;
}
