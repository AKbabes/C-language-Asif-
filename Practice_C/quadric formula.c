#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,n,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    n= (b*b)-(4*a*c);
    r1=(-b+sqrt(n))/(2*a) ;
    r2=(-b-sqrt(n))/(2*a) ;
    if(n<0 && a==0)
        printf("Impossivel calcular");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
return 0;
}
