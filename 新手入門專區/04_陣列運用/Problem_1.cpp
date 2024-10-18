#include <iostream>
using namespace std;
int main() {
    int arr[128] = {};
    int i, t;
    while (cin >> i){
        for (int n=0; n<i; n++){
            cin >> t;
            arr[n] = t;
        }
        for (int l=1; l<=i; l++){
            cout << arr[i-l];
            if(l<i){
                cout << " ";
            }
        }
        cout << "\n";
    }
}