#include <iostream>
using namespace std;
int main() {
    int i, n;
    while (scanf("%d %d", &i, &n) != EOF) {
        switch (i<=120 ? 1 : 2) {
            case (1): i<=60 ? printf("%.1f\n", static_cast<float>(i*n)) : printf("%.1f\n", static_cast<float>((60*n)+((i-60)*n*1.33))); break;
            case (2): printf("%.1f\n", static_cast<float>(((60*n)+(60*n*1.33))+((i-120)*n*1.66))); break;
        }
    }
}