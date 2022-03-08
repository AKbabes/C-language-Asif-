#include <stdio.h>
float celtofah(float cel){
    return ((cel*9.0/5.0)+32.0);
}
float fahtocel(float fah){
    return (fah-32)*5/9;
}
int main(){
    float cel,fah,fahrenheit,celcious;
    printf("Enter temperature in C: ");
    scanf("%f",&cel);
    printf("Enter temperature in F: ");
    scanf("%f",&fah);
    fahrenheit=celtofah(cel);
    celcious=fahtocel(fah);
    printf("\nFahrenheit = %.2f",fahrenheit);
    printf("\nCelcious = %.2f",celcious);
    return 0;
}
