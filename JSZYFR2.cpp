#include <bits/stdc++.h>
using namespace std;

const int primes[5] = {127, 131, 137, 139, 149};

char change_letter(int number, int prime) {
    if (number % prime > 'Z' || number % prime < 'A')
        return '?';
    return char(number%prime);
}

string change_word(int numbers[], int n, int prime) {
    string result = "";
    for (int i = 0; i < n; i++) {
        char c = change_letter(numbers[i], prime);
        if (c == '?')
            return "?";
        result += c;
    }
    return result;
}

void fun() {
    int n; cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    vector<pair<int, string>> V;
    for (int i = 0; i < 5; i++) {
        int prime = primes[i];
        string word = change_word(numbers, n, prime);
        if (word != "?")
            V.push_back(make_pair(prime, word));
    }
    if (V.size() == 1)
        cout << V[0].first << " " << V[0].second << "\n";
    else
        cout << "NIECZYTELNE\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        fun();
    }
    return 0;
}
