#include<stdio.h>
double area(double length,double width){
     double ans;
     ans=length*width;
     printf("\nArea = %.2lf",ans);
}
double perimeter(double length,double width){
   double ans;
   ans=2*(length+width);
   printf("\nPeremeter = %.2lf",ans);
}
int main(){
     double length,width,x,y;
     printf("Enter the Length : ");
     scanf("%lf",&length);
     printf("\nEnter the Width : ");
     scanf("%lf",&width);
     area(length,width);
     perimeter(length,width);
     return 0;
}
