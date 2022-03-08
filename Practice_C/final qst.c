#include<stdio.h>
#include<string.h>
int main(){
    char arr[10000];
    int i,n,size;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%s",&arr);
    size=strlen(arr);
    if(size<10)
    printf("0.0%d\n",size);
    else
    printf("0.%d\n",size);
    }
return 0;
}
