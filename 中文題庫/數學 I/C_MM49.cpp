#include <iostream>
using namespace std;
int count(int n) {
    int num=1, ones=1;
    while (num%n!=0) {
        num = (num*10+1)%n;
        ones++;
    }
    return ones;
}

int main() {
    int i, n[11], num[11];
    cin >> i;
    for (int t=0; t<i; t++) {
        cin >> n[t];
        num[t] = count(n[t]);
    }

    for (int t=0; t<i; t++) {
        cout << num[t] << '\n';
    }
}