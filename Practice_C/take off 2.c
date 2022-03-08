#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
return 0;
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        printf("No\n");
    }
}
    printf("Yes\n");
return 0;
}

