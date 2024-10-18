#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, string> dict_2 = {{"dog", "狗"}, {"cat", "貓"}, {"duck", "鴨"}, {"cow", "牛"}, {"fox", "狐"}};
    string s;
    cin >> s;
    cout << dict_2[s] << "\n";
}