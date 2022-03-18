#include <iostream>
using namespace std;

int main(){
    double arr[12][12];
    char c;
    double sum = 0.0;
    cin >> c;
    for(int i=0;i<=11;i++){
            for(int j=0;j<=11;j++){
                   cin>>arr[i][j];
                   if(j>11-i){
                        sum += arr[i][j];
                   }
            }
   }
    if(c == 'S')
         printf("%.1f\n", sum);
    else
         printf("%.1f\n", sum/66.0);
    return 0;
}
