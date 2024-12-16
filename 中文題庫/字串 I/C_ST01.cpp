#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int i, n;
    cin >> i >> n;
    switch (i) {
        case 2: {bitset<8> bin_n(n); cout << bin_n << endl; break;}
        case 8: {cout.setf(ios::uppercase); cout << oct << n << endl; break;}
        case 16: {cout.setf(ios::uppercase); cout << hex << n << endl; break;}
    }

    return 0;
}
