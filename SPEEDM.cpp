#include <bits/stdc++.h>
using namespace std;

void knapsack(int n, int T[]) {

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += T[i];

    int halfSum = (sum + 1) / 2;
    int A[halfSum + 1];
    for (int i = 0; i <= halfSum; i++)
        A[i] = 0;
    int B[halfSum + 1];
    B[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= halfSum; j++) {
            if (j >= T[i-1])
                B[j] = max(A[j], A[j-T[i-1]] + T[i-1]);
            else
                B[j] = A[j];
        }
        for (int j = 1; j <= halfSum; j++)
            A[j] = B[j];
    }

    cout << abs(sum - 2*A[halfSum]) << " " << sum << "\n";
}


int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int T[n];
        for (auto& i : T)
            cin >> i;
        knapsack(n, T);
    }
}
