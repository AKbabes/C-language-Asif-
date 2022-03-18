#include<iostream>
using namespace std;
int main(){
double after,before,diff,per;
cin>>before>>after;
diff=after-before;
per=(diff/before)*100;
printf("%.2lf",per);
cout<<"%"<<endl;
return 0;
}
