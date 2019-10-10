#include <bits/stdc++.h>
using namespace std;

void gray(int n, int k) {
    n = n ^ (n >> 1);
    string res = "";
    while (n) {
        res = char(n%2 + '0') + res;
        n >>= 1;
    }
    while (res.size() < k)
        res = '0' + res;
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 0; i < pow(2, n); i++)
            gray(i, n);
        cout << endl;
    }
    return 0;
}
