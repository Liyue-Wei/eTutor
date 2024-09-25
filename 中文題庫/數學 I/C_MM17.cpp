#include <iostream>
using namespace std;
int gcd(int m, int n) {
    int t = 1;
    while(t != 0) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}

int main() {
    int i, n;
    cin >> i >> n;
    cout << gcd(i, n) << '\n';
}