#include <iostream>
using namespace std;
int main() {
    int i, n;
    cin >> i;
    for(n=1; n<=i; n++) {
        if(i%n==0) {
            cout << n;
            if(n<i) {cout << " ";}
        }
    }
    cout << '\n';
}