#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {


        int n, k; cin >> n >> k;
        int A[n][k];
        int B[n*k];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                cin >> A[i][j];
                int p = j*n;
                p += (j % 2 == 0)? i : n - 1 - i;
                B[p] = A[i][j];
            }
        }

        int temp = B[n*k - 1];
        for (int p = 0; p < n*k; p++)
            swap(B[p], temp);

        for (int p = 0; p < n*k; p++) {
            int j = p / n;
            int i = (j % 2 == 0)? (p % n) : n - 1 - (p % n);
            A[i][j] = B[p];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++)
                cout << A[i][j] << " ";
            cout << endl;
        }


    }
    return 0;
}
