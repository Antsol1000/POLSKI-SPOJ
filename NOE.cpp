#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    int a;
    int maska = 0;
    while (cin >> a) {
        maska ^= a;
    }
    cout << maska;
    return 0;
}
