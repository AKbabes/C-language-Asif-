#include <stdio.h>
 int magic(int n){
    if(n == 0)
        return 1;
    else if(n == 1)
        return 2;
    else if(n == 2)
        return (magic(n-1) + magic(n-2));
    else
        return (magic(n-1) + magic(n-2)+magic(n-3));
}
int main(){
    int num,x;
    scanf("%d",&num);
    for(int i = 0; i<num; i++)
        x =magic(i);
    printf("%d\n",x);
}
