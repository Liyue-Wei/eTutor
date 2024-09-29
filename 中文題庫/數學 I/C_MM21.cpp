#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    long long i, n;
    n=1;
    cin >> i;
    for(int t=1; t<=i; t++) {
        n*=t;
    }
    cout << n << '\n';
}