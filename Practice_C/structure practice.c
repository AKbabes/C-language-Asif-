#include<stdio.h>
//#include<string.h>
struct car{
    char *engine;
    char *name;
    int *price;
};
void print(struct car cars);

int main(){
struct car cars1;
struct car cars2;
struct car cars3;

cars1.engine = "Mersydies";
cars1.name = "Asif";
cars1.price = 1400450;

cars2.engine = "BMW";
cars2.name = "Akram";
cars2.price = 2100500;

cars3.engine = "Tesla";
cars3.name = "Babes";
cars3.price = 2800560;

print(cars1);
print(cars2);
print(cars3);
}
void print(struct car cars){
printf("Cars info:\n\t%s\n\t%s\n\t%d\n",cars.engine,cars.name,cars.price);
//printf("Car tow info:\n\t%s\n\t%s\n\t%d\n",cars2.engine,cars2.name,cars2.price);
//printf("Car three info:\n\t%s\n\t%s\n\t%d\n",cars3.engine,cars3.name,cars3.price);
}
