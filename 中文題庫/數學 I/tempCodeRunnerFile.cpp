#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    long long i, n, t;
    int arr[128];
    cin >> i;
    n = sqrt(i);
    for (t=i; t>0; t--) {
        // cout << t << endl;
        for (int l=2; l<=n; l++) {
            // cout << l << " " << t%l << endl;
            arr[l-2] = t%l;
        }
        int *is_zero = find(arr, arr+n, 0);
        if(is_zero == arr+n) {cout << t << '\n'; break;}
    }
    // cout << arr;
}