#include <iostream>
using namespace std;
int main() {
    int i, n, t, l;
    cin >> i;
    n = i/1000; t = i/100; l = i/10;
    cout << n%10 << "\n" << t%10 << "\n" << l%10 << "\n" << i%10 << "\n";
}