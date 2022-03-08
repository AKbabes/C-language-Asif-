#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void display(int a[]);
void ins(int a[]);

void main(){
    int a[5];
    printf("Enter Five Integer values for the array : ");
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("\nArray Elements are: ");
    for(int i=0; i<5; i++){
        printf("%d  ", a[i]);
    }
    ins(a);
    display(a);
}
void ins(int a[]){
    int i,j,key;
    for(j=0;j<5;j++){
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key){
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}

void display(int a[]){
    int j;
    printf("\n\nAfter sorting: ");
    for (j = 0; j < 5; j++){
        printf(" %d ", a[j]);
    }
    printf("\n");
}

