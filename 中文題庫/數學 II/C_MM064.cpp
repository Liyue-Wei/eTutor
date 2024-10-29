#include <iostream>
#include <cmath>
#define scale_1 1.36
#define scale_2 1.2
#define scale_3 0.8
using namespace std;
int main() {
    int i, n;
    scanf("%d", &i);
    n = ((50000 * pow(scale_1, i)) - (10000 * pow(scale_2, i)))/ (35.2 * pow(scale_3, i));
    printf("%d", n);
}