#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

inline ll strony (ll cyfry) {
    ll stron = 0;
    ll i = 9;
    ll j = 1;
    while (cyfry) {
        if (cyfry > i*j) {
            cyfry -= i*j;
            stron += i;
        }
        else {
            stron += cyfry/j;
            cyfry = 0;
        }
        i *= 10;
        j++;
    }
    return stron;
}

int main() {
    ll a;
    while (scanf("%llu", &a) != -1) {
        printf("%llu\n", strony(a));
    }
}
