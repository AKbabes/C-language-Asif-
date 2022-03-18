#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    while(cin>>n>>p){
        int i,j,g;
        int arr[n];
        int pos;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(j=0;j<p;j++){
            cin>>pos;
            cout<<arr[pos-1]<<endl;
        }
//        for(j=0;j<p;j++){
//            g=pos[j];
//            cout<<arr[g-1]<<endl;
//        }
    }
return 0;
}
