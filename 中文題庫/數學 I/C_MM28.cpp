#include <iostream>
using namespace std;
int main() {
    int i;
    cin >> i;
    for (int n=35; n<i; n+=35) {
        if(n!=35) {cout << " ";}
        cout << n;
    }
    cout << '\n';
}