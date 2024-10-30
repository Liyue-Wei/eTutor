#include <stdio.h>
int main() {
    int i, n;
    scanf("%d %d", &i, &n);
    printf("%d+%d=%d\n", i, n, (i+n));
    printf("%d*%d=%d\n", i, n, (i*n));
    printf("%d-%d=%d\n", i, n, (i-n));
    n!=0 ? printf("%d/%d=%d...%d\n", i, n, (i/n), (i%n)) : EOF; 
}