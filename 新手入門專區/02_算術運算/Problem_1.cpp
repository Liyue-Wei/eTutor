#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, n;
    cin >> i >> n;
    cout.setf(ios::showpoint);
    cout << fixed << setprecision(1) << "Triangle area:" << i * n / 2.0 << endl;

    return 0;
}