#include <iostream>
using namespace std;

string A = "0123456789ABCDEF";

string int2all (int n, int base) {
    if (!n)
        return "0";
    string res = "";
    while (n) {
        res = A[n % base] + res;
        n /= base;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << int2all(n, 16) << " " << int2all(n, 11) << endl;
    }
    return 0;
}
