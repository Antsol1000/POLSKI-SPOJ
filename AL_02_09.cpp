#include <bits/stdc++.h>
using namespace std;

void balance (multiset<int> &A, multiset<int> &B) {
    while (true) {
        if (A.size() && B.size() && (*(--A.end()) > *(B.begin()))) {
            auto i = A.end();
            i--;
            B.insert(*i);
            A.erase(i);
        }
        if (A.size() == B.size() || A.size() - 1 == B.size())
            break;
        if (A.size() < B.size()) {
            auto i = B.begin();
            A.insert(*i);
            B.erase(i);
        }
        else {
            auto i = A.end();
            i--;
            B.insert(*i);
            A.erase(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    multiset <int> A, B;
    string a;
    while (cin >> a) {
        if (a == "?") {
            if (A.size() == B.size()) {
                auto i = B.begin();
                cout << *i << "\n";
                B.erase(i);
            }
            else {
                auto i = A.end();
                i--;
                cout << *i << "\n";
                A.erase(i);
            }
        }
        else {
            A.insert(atoi(a.c_str()));
        }
        balance(A, B);
    }
}
