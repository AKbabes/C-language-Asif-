#include<stdio.h>
#include<string.h>
int main(){
 char a[10], b[10];
 fgets(a,10,stdin);
 fgets(b,10,stdin);
 if(strcmp(a,b)==0)
    printf("Yes\n");
 else
    printf("No\n");
return 0;
}
