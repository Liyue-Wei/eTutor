#include <iostream>
#include <string>
using namespace std;
int main() {
    int i, n, t;
    string s;

    cin >> i >> s >> n;
    for (t=0; t<=i; t+=n) {
        cout << s.substr(t, n);
        if (t<i-n) {
            cout << " ";
        }
    }
    cout << "\n";
}