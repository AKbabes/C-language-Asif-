/**
#include<stdio.h>
int main(){
    int a;
    for(a=1;a>=-10;a--){

    printf("hopp \n");
    printf("%d\n",a);

    }
return 0;
}
1
12
123
1234


#include<stdio.h>
int main(){
    int a,r,c;
    scanf("%d",&a);
    for(r=1; r<=a; r++){
      for(c=1; c<=r; c++){
        printf("*");
      }
      printf("\n");
    }

return 0;
}
1234
123
12
1
*/

#include<stdio.h>
int main(){
    int a,r,c;
    scanf("%d",&a);
    for(r=a ; r>=1; r--){
      for(c=a; c>=1; c++){
        printf("%d",r);
      }
      printf("\n");
    }

return 0;
}
