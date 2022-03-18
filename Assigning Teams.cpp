#include<iostream>
using namespace std;
int main()
{
    int arr[4],i,j,temp;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    for(i=0; i<4-1; i++){
        for(j=i+1; j<4; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int T1=arr[0]+arr[3];
    int T2=arr[1]+arr[2];

    cout<<abs(T1-T2)<<endl;
}
