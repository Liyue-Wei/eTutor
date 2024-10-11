#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long dec_num;
    cout.setf(ios::uppercase);
    while (cin >> dec_num) {cout << hex << dec_num << '\n';}
}