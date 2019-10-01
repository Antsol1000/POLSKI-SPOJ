#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    map<string, int> A;
    for (int i = 0; i < n; i++) {
        string a = "";
        for (int j = 0; j < n; j++) {
            char c; cin >> c;
            a += c;
        }
        A[a]++;
    }
    if (A.size() != 3)
        cout << "NIE";
    else {
        cout << "TAK ";
        vector<int> v;
        for (auto i : A)
            v.push_back(i.second);
        sort(v.begin(), v.end());
        for (auto i : v)
            cout << i << " ";
    }
    return 0;
}
