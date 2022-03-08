#include<stdio.h>
void add(int, int);
int main(){
   int row, col;
   printf("Number of rows: ");
   scanf("%d",&row);
   printf("Number of column: ");
   scanf("%d",&col);

   add(row, col);
return 0;
}
void add(int r, int c){
   int m1[r][c], m2[r][c], s[r][c];
   printf("Enter the elements of first 1st matrix: \n");
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j < c;j++ ) {
       scanf("%d",&m1[i][j]);
     }
   }
   printf("Enter the elements of first 2nd matrix: \n");
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j<c;j++ ) {
       scanf("%d",&m2[i][j]);
     }
   }
   printf("Output: ");
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j<c;j++ ) {
       s[i][j]=m1[i][j]+m2[i][j];
       printf("%d ",s[i][j]);
       }
   }
}
