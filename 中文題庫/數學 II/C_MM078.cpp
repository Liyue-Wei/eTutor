#include <iostream>
using namespace std;
int count(int i) {
    long double t=0;
    for (int n=1; n<=i/2; n++) {
        // cout << n << " ";
        if (i%n==0) {t+=n;}
    }
    // cout << endl << t;
    return(t);
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    long double i, n;
    cin >> n >> i;
    for (n; n<=i; n++) {
        long double num = count(n);
        if (num==n && num!=0) {cout << num << " ";}
    }
    cout << '\b' << endl;
}

/*
#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int i, n, t, l=0;
    cin >> i;
    for (n=0; n<=i; n++) {
        for (t=1; t<=n; t++) {
            if (i%t==0) {
                l+=t;
            }
        }
        cout << l << " ";
    }
}*/