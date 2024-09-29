#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int i, n, t;
    cin >> i >> n >> t;
    if (i+n>t && i+t>n && n+t>i) {
        cout << "fit\n";
    } else {
        cout << "unfit\n";
    }
}
