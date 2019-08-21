#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(0);
    unsigned long long int a;
    while (scanf("%llu", &a) != -1) {
        unsigned long long int r = 0;
        while (a) {
            r = (r << 1) | (a & 1);
            a >>= 1;
        }
        printf("%llu\n", r);
    }
}
