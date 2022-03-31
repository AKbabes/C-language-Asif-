#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
for(int i=0;i<num;i++){
    string word;
    cin>>word;
    int l=word.length();
    if(l==5){
            cout<<"3"<<endl;
        }
    else if((word[0]=='t' && word[1]=='w') || (word[0]=='t' && word[2]=='o')||(word[1]=='w' && word[2]=='o')){
            cout<<"2"<<endl;
        }
    else{
            cout<<"1"<<endl;
        }
}
return 0;
}
