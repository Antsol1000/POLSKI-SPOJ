#include <bits/stdc++.h>
using namespace std;

bool Compare (string a, string b) {
    return a+b > b+a;
}

void Concatenatio () {
    int n; cin >> n;
    vector <string> numbers;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        numbers.push_back(x);
    }
    sort(numbers.begin(), numbers.end(), Compare);
    for (auto i : numbers)
        cout << i;
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        Concatenatio();
    }
    return 0;
}
