#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <stdio.h>
// #include <iomanip>
using namespace std;
int k, n[19];
const double pi = M_PI;

int find_num(int i) {
    if (i>=9) {
        long double pi_2 = pi*(pow(10, 9)) - static_cast<int>((pi*pow(10, 9))/10)*10;
        i -= 9;
        return (static_cast<long long>(pi_2*(pow(10, i))) - static_cast<long long>(static_cast<int>((pi_2*pow(10, i))/10)*10));
    }
    else {return (static_cast<long long>(pi*(pow(10, i))) - static_cast<long long>(static_cast<int>((pi*pow(10, i))/10)*10));}
    // return (static_cast<int>((pi*(pow(10, i)))), static_cast<int>((pi*(pow(10, i))/(pow(10, i)*(pow(10, i))))));
    // printf("%d", static_cast<int>(pi*(pow(10, i))) - static_cast<int>(static_cast<int>((pi*pow(10, i))/10)*10));
}

int main() {
    scanf("%d", &k);
    for (int i=0; i<k; i++) {
        scanf("%d", &n[i]);
    }
    for (int i=0; i<k; i++) {
        printf("%d -> %d\n", i, find_num(n[i]));
        // find_num(n[i]);
    }
    // cout << fixed << setprecision(20) << pi;
}