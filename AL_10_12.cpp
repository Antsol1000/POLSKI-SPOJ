#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

inline ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

inline ll howManyDivide(ll beg, ll en, ll d) {
    return en / d - (beg - 1) / d;
}

inline ll fun(ll a, ll b, ll c, ll beg, ll en) {
    ll res = 0;
    res += howManyDivide(beg, en, a);
    res += howManyDivide(beg, en, b);
    res += howManyDivide(beg, en, c);
    res -= howManyDivide(beg, en, lcm(a, b));
    res -= howManyDivide(beg, en, lcm(b, c));
    res -= howManyDivide(beg, en, lcm(c, a));
    res += howManyDivide(beg, en, lcm(lcm(a, b), c));
    return res;
}

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    ll beg, en;
    while (scanf("%lld %lld", &beg, &en) != -1) {
        printf("%lld\n", fun(a, b, c, beg, en));
    }
    return 0;
}
