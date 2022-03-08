#include<stdio.h>
int main()
{
    int a,b,c,d,num;
        scanf("%d",&num);
    int arr[100];
    for(int i=0; i<num; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<num; i++){
        a = arr[i] + arr[i+1];
        b = a - arr[i+2];
        c = b * arr[i+3];
        d = c/arr[i+3];
        if(d==640){
            printf("I am not a liar.\n");
        }
        else{
            printf("Liar Liar!! Big Cheater!\n");
        }
        i= i+4;
    }
return 0;
}
