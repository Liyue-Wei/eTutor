#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int i, n;
    cin >> i >> n;
    if(i>n) {
        int t=0;
        t=i; i=n; n=t;
    }
    int sub, main, all;
    sub = ((i-1)*i)*0.5;
    all = ((n+1)*n)*0.5;
    main = all-sub;
    cout << main << '\n';
}