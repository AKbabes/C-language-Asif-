#include<iostream>
using namespace std;
int main(){
int length,height,type1,type2;
cin>>height>>length;
type1=(height * length)+((height-1)*(length-1));
type2=(height-1)+(length-1);
cout<<type1<<endl<<type2*2<<endl;
return 0;
}
