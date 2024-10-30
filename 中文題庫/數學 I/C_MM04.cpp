#include <iostream>
using namespace std;
int main() {
    long long i, n;
    while (cin >> i >> n) {
        cout << i << "+" << n << "=" << i+n << '\n'
             << i << "*" << n << "=" << i*n << '\n'
             << i << "-" << n << "=" << i-n << '\n'
             << i << "/" << n << "=" << i/n << "..." << i%n << '\n';
    }
}