#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int i;
    long double n=0;
    scanf("%d", i);
    for(int t=1; t<=i; t++) {
        n += pow((-1), (t-1))*(2*n-1);
    }
    cout << n;
}