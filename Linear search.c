#include <stdio.h>
int main(){
  int arr[1000], search, c, n;

  printf("Enter the total number of elements in array\n");
  scanf("%d", &n);

  printf("\nEnter %d integer numbers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);

  printf("\nEnter a number to search ");
  scanf("%d", &search);

  for (c = 0; c < n; c++){
    if (arr[c] == search) {
      printf("\n%d is present at position %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("\n%d isn't present in the array.\n", search);

return 0;
}
