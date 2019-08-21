#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int r = a % b;
        while (r < 0)
            r += abs(b);
        cout << r << endl;
    }
}
