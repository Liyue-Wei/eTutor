#include <iostream>
using namespace std;
int main() {
    int i;
    char num[10001];
    scanf("%d", &i);
    for(int t=0; t!=i; t++) {
        scanf("%d", &num[t]);
    }

    for(int t=0; t!=i; t++) {
        printf("%d ", num[t]);
    }
}

/*
#include <iostream>
#include <vector>
using namespace std;

int find_min_ones(int n) {
    int num = 1;
    int count = 1;

    while (num % n != 0) {
        num = (num * 10 + 1) % n;
        count++;
    }

    return count;
}

int main() {
    int k;
    cin >> k;
    vector<int> results(k);

    for (int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        results[i] = find_min_ones(n);
    }

    for (int i = 0; i < k; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}
*/