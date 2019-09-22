#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1300000;
// for this value we have about 10^5 primes

void eratostenes(vector<int> &primes) {
    bool *T = new bool[MAX_N];
    for (int i = 2; i < MAX_N; i++)
        T[i] = true;
    for (int i = 2; i*i <= MAX_N; i++) {
        if (T[i]) {
            for (int j = i*i; j < MAX_N; j += i)
                T[j] = false;
        }
    }
    for (int i = 2; i < MAX_N; i++)
        if (T[i])
            primes.push_back(i);
}

int fun(int n, vector<int> &primes) {
    vector<int> V;
    if(n < 4) {
        return 1;
    }
    for(int i = 1; i <= n; ++i)
        V.push_back(i);

    int j = 0;
    for(int i = 0; i < n-1; ++i) {
        int k = primes[i] - 1 + j;
        k %= V.size();
        V.erase(V.begin() + k);
        j = k;
        j %= V.size();
    }
    return V[0];
}

int main() {
    ios_base::sync_with_stdio(0);

    vector<int> primes;
    eratostenes(primes);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << fun(n, primes) << "\n";
    }

    return 0;
}
