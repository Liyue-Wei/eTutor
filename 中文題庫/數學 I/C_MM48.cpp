#include <iostream>
using namespace std;
int f91(int n) {
    if(n<=100) {return f91(f91(n+11));}
    else return n-10;
}

int main() {
    int i;
    int n[8192], l[8192];
    cin >> i;
    for(int t=0; t!=i; t++) {
        cin >> n[t];
        l[t] = f91(n[t]);
        cout <<  l[t] << '\n';
    }
}
