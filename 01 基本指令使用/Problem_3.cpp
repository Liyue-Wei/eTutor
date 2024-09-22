#include <iostream>
using namespace std;
int main() {
    int i, n, t, l;
    cin >> i;
    n = i/1000; t = i/100; l = i/10;
    cout << i%10 << "," << l%10 << "," << t%10 << "," << n%10 << "\n";
}