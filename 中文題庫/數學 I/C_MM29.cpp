#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    long long i, n, t;
    cin >> i;
    n = sqrt(i);
    for (t=--i; t>0; t--) {
        int b = 1;
        for (int l=2; l<=n; l++) {
            if(t%l==0) {b*=0;}
        }
        if(b!=0) {cout << t << '\n'; break;}
    }
}