#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, i, t, l;
    long double n;
    cin >> i;
    cin >> n;
    cin >> t;

    l = i/t;
    if(i%t==0){
        for(int x=1; x<=l; x++){
            a=n;
            a*=pow(0.1, i-x*t);
            n*=pow(0.1, i-x*t);
            n-=a;
            n*=pow(10, i-x*t);
            if(a/pow(10, t-1)<1){
                for(int b=0; b<t-1; b++){
                    cout << "0";
                }
                cout << a;
            }    
            else{
                cout << a;
            }

            if(x<l){
                cout << " ";
            }
        }
        cout << "\n";
    }

    else{
        for(int x=1; x<=l; x++){
            a=n;
            a*=pow(0.1, i-x*t);
            n*=pow(0.1, i-x*t);
            n-=a;
            n*=pow(10, i-x*t);
            if(a/pow(10, t-1)<1){
                for(int b=0; b<t-1; b++){
                    cout << "0";
                }
                cout << a;
            }    
            else{
                cout << a;
            }

            if(x<l){
                cout << " ";
            }
        }
        cout << " " << n << "\n";     
    }

    return 0;
}