#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    long double d;
    d = sqrt(pow(x, 2)+pow(y, 2));
    if(d<=200) {cout << "inside\n";}
    else {cout << "outside\n";}
}