#include<stdlib.h>
struct PPS{
int C,S,E; char dept[12];//array size barabo
} PPS1={3,2,1};
typedef struct PPS P;
int main(){
struct PPS P={1,2,3,"PPS and CSE"};
struct PPS PP={3,3,3};// pps pp & structure decalar
struct PPS q={1,"skjr",5,6};
printf("%d %d %d\n", P.C,P.S,P.E);//small p hobe
printf("%d %d %d\n", PP.C,PP.S,PP.E);// capital C
return 0;
}
