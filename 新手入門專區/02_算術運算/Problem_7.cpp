#include <iostream>
using namespace std;
int main() {
    int i[3], ans=0;
    cin >> i[0] >> i[1] >> i[2];
    for (int n=0; n<2; n++) {
        (i[n+1] > i[n] ) ? ans = i[n+1] : ans = i[n];
    }
    cout << ans << endl;
    
    return 0;
}