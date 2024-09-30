#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int i, n, t;
    cin >> i >> n >> t;
    if(i+n>t && i+t>n && n+t>i) {
        i = pow(i, 2);
        n = pow(n, 2);
        t = pow(t, 2);
        if(i+n==t || i+t==n || n+t==i) {cout << "Right Triangle\n";}
        else if(i+n<t || i+t<n || n+t<i) {cout << "Obtuse Triangle\n";}
        else if(i+n>t || i+t>n || n+t>i) {cout << "Acute Triangle\n";}
    } 
    else {
        cout << "Not Triangle\n";
    }
}