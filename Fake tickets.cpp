#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int h=0;
    int arr[m];
    for (int i=0; i<m; i++){
        cin>>arr[i];
    }
    for(int i=0; i<m; i++){
        int count=0;
        for(int j=i+1; j<m; j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
            break;
        }
        h=h+count;
        if(h>0) break;
    }
    cout<<"ans = "<<h;
}
