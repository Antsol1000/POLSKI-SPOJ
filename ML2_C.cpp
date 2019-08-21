#include <bits/stdc++.h>
using namespace std;

int A[26];

int main() {
    A[0] = 1;
    for (int i = 1; i < 26; i++) {
        for (int j = 1; j < 4; j++) {
            if (i >= j) {
                A[i] = (A[i] + A[i - j]) % 1000000007;
            }
        }
    }
    int T; scanf("%d", &T);
    while (T--) {
        unsigned long long x = 1;
        for (int i = 0; i < 4; i++) {
            int y;
            scanf("%d", &y);
            x *= A[y];
            x %= 1000000007;
        }
        printf("%llu\n", x);
    }
}
