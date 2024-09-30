#include <iostream>
#include <bitset>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int num;
    cin >> num;
    bitset<8> binary(num);
    cout << binary << '\n';
}
