#include<iostream>
using namespace std;
int main(){
    double arr[12][12],sum = 0.0;
    int i, j, num;
    cin>>num;
    char t;
    cin>>t;
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin>>arr[i][j];
        }
    }
    for(i = 0; i < 12; i++){
        sum += arr[i][num];
    }
    if(t == 'S')
        printf("%.1lf\n",sum);
    else if(t == 'M')
        printf("%.1lf\n",sum/12.0);
    return 0;
}

