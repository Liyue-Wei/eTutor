#include <iostream>
using namespace std;
int main() {
    int i=0, n=0;
    char c[3], h[8];
    scanf("%s %s", &c, &h);

    while (h[n]!='\0'){
        if(h[n]==c[0] && h[n+1]==c[1]) {i+=1;}
        n++;
    }    

    printf("%d\n", i);
}