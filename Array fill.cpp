#include <iostream>
using namespace std;
int main(){
    int arr, j;

    int even[5];
    int odd[5];

    int e = 0,o = 0;

    for(int i = 0; i < 15; i++){
        cin >> arr;
            if(arr%2 == 0){
                even[e] = arr;
                    e++;
            }
            else{
                odd[o] = arr;
                  o++;
            }

            if(e == 5){
                 for(j=0;j<5;j++){
                 cout << "par[" << j << "] = " << even[j] <<endl;
                 }
                 e = 0;
            }
            if(o == 5){
                 for(j=0;j<5;j++){
                 cout << "impar[" << j << "] = " << odd[j] <<endl;
                 }
                 o = 0;
            }
            if(i == 14){
                 for(j=0;j<o;j++){
                   cout << "impar[" << j << "] = " << odd[j] << "\n";
                   }
                 for(j=0;j<e;j++){
                   cout << "par[" << j << "] = " << even[j] << "\n";
                   }
            }

    }
    return 0;
}
