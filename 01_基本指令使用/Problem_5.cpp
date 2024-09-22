#include <iostream>
using namespace std;
void print(int b) {
    for (int a=0; a<b; a++) {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    int i, n, t, x, y, z;
    cin >> i;
    n = (i/10000)%10; t = (i/1000)%10; x = (i/100)%10; y = (i/10)%10; z = i%10;
    print(n);
    print(t);
    print(x);
    print(y);
    print(z);

    return 0;
}