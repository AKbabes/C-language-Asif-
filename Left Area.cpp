#include <iostream>

using namespace std;

int main(){
    double m[12][12];
    char c;
    double sum = 0.0;

    cin >> c;

    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> m[i][j];
            if(j > (11 - i) && j > i){
                 sum += m[i][j];
            }
        }
   }

    if(c == 'S')
         printf("%.1f\n", sum);
    else
         printf("%.1f\n", sum/30.0);
    return 0;
}
