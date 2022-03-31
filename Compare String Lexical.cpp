#include <iostream>
using namespace std;
int main(){
string a,b;
cin>>a>>b;
int n=a.compare(b);
if(n==0){
    cout<<a<<endl<<b<<endl;
}
else if(n<0){
    cout<<a<<endl<<b<<endl;
}
else if(n>0){
    cout<<b<<endl<<a<<endl;
}
//cout<<n;
return 0;
}
