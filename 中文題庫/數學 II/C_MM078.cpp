#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int i, n, x, y;
    bool flag_1=false;
    unsigned long long value[]={6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
    cin >> i >> n;
    for (int t=0; value[t]!='\0'; t++) {
        cout << t << endl;
        // cout << value[t] << ' ';
        if (i<=value[t] && flag_1==false) {
            x = t;
            flag_1 = true;
        }
        if (n>=value[t]) {y = t;}
    }
    cout << x << " " << y << endl;
    if (x==y) {cout << "null\n";}
    else if (x>y) {cout << value[y] << '\n';}
    else {
        for (int l=x; l<=y; l++) {cout << value[l] << " ";}
        cout << endl;
    }
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