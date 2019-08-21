#include <bits/stdc++.h>
using namespace std;

inline long long int howManyDivide (long long int beg, long long int en, long long int div) {

    // how many numbers belonging to <beg, en> are divide by div

    return en / div - (beg - 1) / div;

}

long long int NWD(long long int a, long long int b) {
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    return NWD(a%b, b);
}

inline long long int NWW(long long int a, long long int b) {
    return a / NWD(a, b) * b;
}

int main() {
    ios_base::sync_with_stdio(0);
    long long int a, b;
    cin >> a >> b;
    long long int beg, en;
    while (cin >> beg >> en) {
        long long int score = howManyDivide(beg, en, a);
        score += howManyDivide(beg, en, b);
        score -= howManyDivide(beg, en, NWW(a, b));
        cout << score << "\n";
    }
    return 0;
}
