#include<stdio.h>
int main () {


       double A, B, C, X;
       scanf("%lf%lf%lf", &A,&B,&C);

       if(B<C) {

         X = B;
         B = C;
         C = X;
       }
       if(A<C) {
        X = A;
        A = C;
        C = X;
       }

       if(A >= B + C){
             printf("NAO FORMA TRIANGULO\n");
            }

        else if(A*A == B*B + C*C){

            printf("TRIANGULO RETANGULO\n");
            }
        else if( A*A > B*B + C*C) {
            printf("TRIANGULO OBTUSANGULO\n");
            }
        else if(A*A < B*B + C*C) {

             printf("TRIANGULO ACUTANGULO");
        }
         if(A == B && B == C) {

            printf(" TRIANGULO EQUILATERO\n");
            }
        else if((A==B && A!=C) || (A==C && A!B) || (B==C && B!A)){
           printf("TRIANGULO ISOSCELES\n");
           }



          return 0;

}
