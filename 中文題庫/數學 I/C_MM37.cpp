#include <iostream>
using namespace std;
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int x, y;
    cin >> x >> y;
    if(x==0 && y==0) {cout << "Origin\n";}
    else if(x==0 && y!=0) {cout << "y-axis\n";}
    else if(y==0 && x!=0) {cout << "x-axis\n";}
    else if(x>0 && y>0) {cout << "1st Quadrant\n";}
    else if(x<0 && y>0) {cout << "2nd Quadrant\n";}
    else if(x<0 && y<0) {cout << "3rd Quadrant\n";}
    else if(x>0 && y<0) {cout << "4th Quadrant\n";}
}