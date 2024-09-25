#include <iostream>
using namespace std;
int main() {
    int i, n, t, l;
    while (cin >> i) {
        n = i/10;
        i%=10;
        t = i/5;
        l = i%5;

        cout << "NT10="<< n << "\nNT5=" << t << "\nNT1=" << l << '\n';
    }
}