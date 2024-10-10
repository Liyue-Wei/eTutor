#include <iostream>
using namespace std;
int main() {
    float i;
    while (scanf("%f", &i) != EOF) {
        switch (i<=800 ? 1 : 2) {
            case (1): printf("%.1f\n", i*0.9); break;
            case (2): i<1500 ? printf("%.1f\n", i*0.81) : printf("%.1f\n", i*0.711); break;
        }
    }
}