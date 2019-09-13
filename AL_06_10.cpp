#include <bits/stdc++.h>
using namespace std;

void printing(string a) {
    auto i = a.begin();
    while (*i == '0')
        i++;
    if (i == a.end()) {
        putchar('0');
    }
    else {
        while (i != a.end()) {
            putchar(*i);
            i++;
        }
    }
    putchar('\n');
}

int main() {
    ios_base::sync_with_stdio(0);

    string a;
    while (cin >> a) {
        vector <string> A;
        sort(a.begin(), a.end());
        A.push_back(a);
        string b = a;
        next_permutation(a.begin(), a.end());
        while (a != b) {
            A.push_back(a);
            next_permutation(a.begin(), a.end());
        }
        for (int i = A.size()-1; i > -1; i--)
            printing(A[i]);
    }

    return 0;
}
