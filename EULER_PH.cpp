#include <iostream>
using namespace std;

long long phi(long long n) { // phi Euler  function
    if (n <= 1) return n;
    if (n == 2) return 1;
    for (long long p = 2; p*p <= n; p++) {
        if (n % p == 0) {
            long long q = 1, qq = p;
            n /= p;
            while (n % p == 0) {
                q = qq;
                qq *= p;
                n /= p;
            }
            return (qq - q) * phi(n);
        }
    }
    return n-1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int nTests;
    cin >> nTests;
    while (nTests--) {
        long long n;
        cin >> n;
        cout << phi(n) << "\n";
    }
    return 0;
}
