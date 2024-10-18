#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char c[4];
    int num=0, num_2=0;
    while (scanf("%s", &c) != EOF) {
        for(int i=0; i<3; i++) {   
            num+=pow(static_cast<int>(c[i]-48), 3);
            num_2+=static_cast<int>(c[2-i]-48)*pow(10, i);
        }   
        if(num==num_2) {cout << "Yes\n";}
        else {cout << "No\n";}
        num=0, num_2=0;
    }
}