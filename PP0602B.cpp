#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n][k];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < k; j++)
                cin >> arr[i][j];

        for (int i = 0; i < k - 1; i++)
            swap(arr[0][i], arr[0][i+1]);
        for (int i = 0; i < n - 1; i++)
            swap(arr[i][k-1], arr[i+1][k-1]);
        for (int i = k - 1; i > 0; i--)
            swap(arr[n-1][i], arr[n-1][i-1]);
        for (int i = n - 1; i > 1; i--)
            swap(arr[i][0], arr[i-1][0]);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}
