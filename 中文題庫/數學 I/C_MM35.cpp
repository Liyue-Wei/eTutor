#include <iostream>
using namespace std;
int main() {
    int i;
    while (cin >> i) {
        if(i%4==0 && i%100!=0 || i%400==0) {
            cout << "Bissextile Year" << '\n';
        }
        else {
            cout << "Common Year" << '\n';
        }
    }
}