#include<stdio.h>
struct abc{
    char a;
    int b;
    char c;
};
int main(){
    struct abc var;
    printf("%d",sizeof(var));
}
