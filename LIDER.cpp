#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

void find_leader() {
    int n;
    scanf("%d", &n);
    vector<ull> A(n);
    for (int i = 0; i < n; i++)
        scanf("%ull", &A[i]);
    sort(A.begin(), A.end());

    int max = 0, leader, temp = 1, i = 0;
    while (i < n - 1) {
        if (A[i] == A[i+1]) {
            i++; temp++;
        }
        else {
            if (temp > max) {
                max = temp;
                leader = A[i];
            }
            i++; temp = 1;
        }
    }
    if (temp > max) {
        max = temp;
        leader = A[i];
    }
    if (max >= (n+2)/2)
        printf("%d\n", leader);
    else
        printf("-1\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        find_leader();
    }
    return 0;
}
