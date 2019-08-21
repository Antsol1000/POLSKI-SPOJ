#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 36623;

void findPrimeNumbers (vector<int> &squaresOfPrimeNumbers) {
    bool T[MAX_N+1];
    for (int i = 2; i < MAX_N; i++)
        T[i] = true;
    for (int i = 2; i*i <= MAX_N; i++)
        if (T[i])
            for (int j = i*i; j < MAX_N; j += i)
                T[j] = false;
    for (int i = 2; i <= MAX_N; i++)
        if (T[i])
            squaresOfPrimeNumbers.push_back(i*i);
}

int main() {
    ios_base::sync_with_stdio(0);
    vector<int> squaresOfPrimeNumbers; //squares of prime numbers smaller than 10^9
    findPrimeNumbers(squaresOfPrimeNumbers);
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        auto a1 = lower_bound(squaresOfPrimeNumbers.begin(), squaresOfPrimeNumbers.end(), a);
        auto b1 = upper_bound(squaresOfPrimeNumbers.begin(), squaresOfPrimeNumbers.end(), b);
        if (*a1 == a)
            a--;
        if (*b1 == b)
            b++;
        cout << b1 - a1 << "\n";

    }
}
