#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    char c; int x;
    cin >> c >> x;
    if (c == '>')
        for (int i = 0; i < n; i++)
            if (A[i] > x)
                cout << A[i] << endl;
    if (c == '<')
        for (int i = 0; i < n; i++)
            if (A[i] < x)
                cout << A[i] << endl;
}
