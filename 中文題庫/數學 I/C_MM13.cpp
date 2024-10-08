#include <iostream>
using namespace std;
int count(int i, int n) {
    return ((i*=60)+n);
}

int main() {
    int hour_1, minute_1, hour_2, minute_2, in_min, out_min;
    scanf("%d %d", &hour_1, &minute_1);
    scanf("%d %d", &hour_2, &minute_2);

    in_min = count(hour_1, minute_1);
    out_min = count(hour_2, minute_2) - in_min;

    switch (out_min<=120 ? 1 : 2) {
        case (1): out_min<=30 ? printf("%d\n", 30) : printf("%d\n", (out_min/30)*30); break;
        case (2): out_min<=150 ? printf("%d\n", 160) : out_min<=240 ? printf("%d\n", (((out_min/30)-4)*40)+120) : printf("%d\n", (((out_min/30)-8)*60)+280); break;
    }    
}