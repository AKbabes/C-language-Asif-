
#include<iostream>
using namespace std;
int main(){
string str,s;
int num,power;
cin>>num;
s="Thor";
for(int i=0;i<num;i++){
    cin>>str>>power;
    if(str==s){
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
}
return 0;
}
