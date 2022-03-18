#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int c;
    cin>>c;
    cout<<"Case "<<i<<":"<<endl;
    for(int j=0;j<c;j++){
        int c1,c2;
        cin>>c1>>c2;
        if(c1>x1 && c2>y1 && c1<x2 && c2<y2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
}
