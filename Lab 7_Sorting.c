#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void display(int arr[]);
void ins(int arr[]);

void main(){
    int a[8]= {1000,100,500,10,50,20,5,2};
    printf("Given numbers: ");
    for(int i=0; i<8; i++){
        printf("%d  ", a[i]);
    }
    ins(a);
    display(a);
}

void ins(int a[]){
    int i,j,key;
    for(j=0; j<8; j++){
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
    printf("\nAfter sorting: ");
    for (j = 0; j < 8; j++){
        printf(" %d ", a[j]);
    }
    printf("\n");
}
