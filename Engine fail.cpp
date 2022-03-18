#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n],i;
for(i=0;i<n;i++){
    cin>>arr[i];
}
int count=0;
for(i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        cout<<(i+1);
        count++;
        break;
    }
}
if(count==0){
    cout<<0;
}
return 0;
}
