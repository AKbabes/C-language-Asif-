#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){//2 3 4 4 4 5 6
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int temp,count=0;
    for(i=0; i<n; i++){
        temp=arr[i];
        //int count=0;
            if(temp==arr[i]){
                count++;
                if(temp!=arr[i+1]){
                    cout<<temp<<" aparece "<<count<<" vez(es)"<<endl;
                    count=0;
                    temp=arr[i+1];
                }
            }
        }

}
