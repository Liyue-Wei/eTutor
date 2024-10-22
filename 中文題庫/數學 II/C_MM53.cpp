#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int k=0;
    long double x;
    
    while (k<2) {
        cout << 4*(pow((-1), k)/((2*k)+1)) << endl;
        x += 4*(pow((-1), k)/((2*k)+1));
        k++;
        cout << x << endl;
    }

    // cout << fixed << x;
}