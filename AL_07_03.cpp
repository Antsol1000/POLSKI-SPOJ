#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

inline ll howManyDiv(ll a, ll b, ll d) {
    return b / d - (a-1) / d;
}

inline ll fun(ll a, ll b) {
    ll result = 0;
    result += 3LL * howManyDiv(a, b, 3);
    result += 5LL * howManyDiv(a, b, 5);
    result += 45LL * howManyDiv(a, b, 10);
    result += 7LL * howManyDiv(a, b, 15);
    result += 90LL * howManyDiv(a, b, 30);
    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        printf("%lld \n", fun(a, b));
    }
    return 0;
}
