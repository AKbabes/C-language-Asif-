#include<iostream>
using namespace std;
int main(){
double arr[12][12],n,sum=0.0;
cin>>n;
char c;
cin>>c;
for (int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        cin>>arr[i][j];
        if(i==n){
            sum+=arr[i][j];
        }
    }
}
if(c=='S'){
    printf("%.1lf\n",sum);
}
else if(c=='M'){
    double ans=sum/12.0;
    printf("%.1lf\n",ans);
}
//for (int i=0;i<12;i++){
//    for(int j=0;j<12;j++){
//        cout<<arr[i][j]<<" ";
//    }
//for(int i=1;i<1;i++){
//    for(int j=0;j<5;j++){
//        sum=sum+arr[i][j];
//    }
//}
}
