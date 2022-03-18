#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
while(1){
    cin>>n;
    int arr[n];
    int lol[n],temp;
    if(n==0){
        return 0;
    }
    for(i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
        lol[i]=temp;
    }
    sort(arr,arr+n);
    //cout<<"index = "<<arr[n-2]<<endl;
    for(int j=0;j<n;j++){
        if(arr[n-2]==lol[j]){
            cout<<j+1<<endl;
        }
    }
}
return 0;
}
