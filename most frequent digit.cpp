#include<iostream>
using namespace std;
int main(){
    string str;                      // 1 3 1 2 5 2
    while(cin>>str){
        int arr[10]={0,0,0,0,0,0,0,0,0,0};
        for(int i=0;i<str.length();i++){
            if(str[i]=='0')
                arr[0]++;
            else if(str[i]=='1')
                arr[1]++;
            else if(str[i]=='2')
                arr[2]++;
            else if(str[i]=='3')
                arr[3]++;
                else if(str[i]=='4')
                arr[4]++;
            else if(str[i]=='5')
                arr[5]++;
            else if(str[i]=='6')
                arr[6]++;
                else if(str[i]=='7')
                arr[7]++;
            else if(str[i]=='8')
                arr[8]++;
            else if(str[i]=='9')
                arr[9]++;
        }
        int max=arr[0],num=0;
        for(int i=1;i<10;i++){
            if(arr[i]>=max){
                max=arr[i];
                num=i;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
