/*
flag pi = 3.1415926535897931159979634685441851615905761718750000000000000000
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int k, n[19];
const double pi = M_PI;

int find_num(int i) {
    if (i>=9) {
        double pi_2 = (pi*(pow(10, 5)) - floor(pi*(pow(10, 5))));
        pi_2 = (pi*(pow(10, 4)) - floor(pi*(pow(10, 4))));
        // cout << fixed << pi*pow(10, 9) << " , " << static_cast<int>(pi*(pow(10, 9))) << endl;
        i -= 9;
        printf("%f, %d, ", pi_2, i);
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
        // printf("%d -> %d\n", i, find_num(n[i]));
        printf("%d\n", find_num(n[i]));
        // find_num(n[i]);
    }
    // cout << fixed << setprecision(20) << pi;
}