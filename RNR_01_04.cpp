#include <bits/stdc++.h>
using namespace std;

bool fun2(int n, int m, int A[], int r) { // check if with begging r people we can complete task
    int dots = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] <= dots)
            dots++;
        else if (r > 0) {
            dots++;
            r--;
        }
    }
    return dots >= m;
}

int fun3(int n, int m, int A[]) { // O ( n*log n )
    int beg = 0, en = n, mid;
    while(beg < en) {
        mid = (beg + en) / 2;
        if (fun2(n, m, A, mid))
            en = mid;
        else
            beg = mid + 1;
    }
    return beg;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int A[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &(A[i]));
        printf("%d\n", fun3(n, m, A));
    }
    return 0;
}
