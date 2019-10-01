#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MOD = 1000000007;

unordered_map<ll, ll> F;

ll fib(ll n) {

	if (n < 2)
        return 1;

	if (F.find(n) != F.end())
        return F[n];

	F[n] = (fib((n + 1) / 2)*fib(n / 2) + fib((n - 1) / 2)*fib((n - 2) / 2)) % MOD;

	return F[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << fib(n-1) << "\n";
    }
    return 0;
}
