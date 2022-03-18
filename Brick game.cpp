#include<iostream>
using namespace std;
int main(){
int n,i;
cin>>n;
for (i=0;i<n;i++){
    int p,j;
    cin>>p;
    int arr[p];
    int need=p/2;
    for(j=0;j<p;j++){
        cin>>arr[j];
    }
    cout<<"Case "<<i+1<<": "<<arr[need]<<endl;
}
return 0;
}
