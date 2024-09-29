#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    long double i, n, t, s;
    i = 1*100;
    n = 2.54*30;
    s = 0;

    cin >> t;
    t*=100;

    while (s*i < t+(s*n)) {
        s++;
    }    
    cout << s << '\n';
}