#include <stdio.h>
int sorted(int);
int main(){
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);
    sorted(n);
}
int sorted(int n){
    int arr1[100];
    int i, j, tmp;
       printf("Input the elements in the array :\n");
       for(i=0;i<n;i++){
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted order:\n");
    for(i=0; i<n; i++){
        printf("%d  ", arr1[i]);
    }
	   printf("\n");
}

