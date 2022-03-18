#include<iostream>
using namespace std;
int main(){
string str;
cin>>str;
int arr[2]={0,0};
for(int i=0;i<6;i++){
   if(str[i]=='1')
        arr[0]++;
   if(str[i]=='2')
        arr[1]++;
}
cout<<arr[0]<<endl<<arr[1]<<endl;
}

