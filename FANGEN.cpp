#include <bits/stdc++.h>
using namespace std;

vector <vector <char>> wiatrak(int n) {
    vector <vector <char>> A = vector <vector <char>> (2, vector<char>(2, '*'));
    int i = 2;
    while (i <= abs(n)) {

        // adding first and last row
        A.insert(A.begin(), vector<char>(2*i, '?'));
        A.push_back(vector<char>(2*i, '?'));

        if (n > 0) {
            for (int j = 1; j < 2*i - 1; j++) {
                // generating columns
                if (j < i) {
                    A[j].insert(A[j].begin(), '*');
                    A[j].push_back('.');
                }
                else {
                    A[j].insert(A[j].begin(), '.');
                    A[j].push_back('*');
                }
            }

            // changing corners
            A[0][0] = '*'; A[0][2*i-1] = '*'; A[2*i-1][0] = '*'; A[2*i-1][2*i-1] = '*';

            //changing first and last row
            for (int j = 1; j < 2*i - 1; j++) {
                A[0][j] = (j < i)? '.' : '*';
                A[2*i-1][j] = (j < i)? '*' : '.';
            }

        }
        else {
            // exactly the same but change '*' to '.'
            for (int j = 1; j < 2*i - 1; j++) {
                if (j < i) {
                    A[j].insert(A[j].begin(), '.');
                    A[j].push_back('*');
                }
                else {
                    A[j].insert(A[j].begin(), '*');
                    A[j].push_back('.');
                }
            }
            A[0][0] = '*'; A[0][2*i-1] = '*'; A[2*i-1][0] = '*'; A[2*i-1][2*i-1] = '*';
            for (int j = 1; j < 2*i - 1; j++) {
                A[0][j] = (j < i)? '*' : '.';
                A[2*i-1][j] = (j < i)? '.' : '*';
            }
        }
        i++;
    }
    return A;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        vector <vector<char>> A = wiatrak(n);
        for (auto x : A) {
            for (auto c : x)
                cout << c;
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
}
