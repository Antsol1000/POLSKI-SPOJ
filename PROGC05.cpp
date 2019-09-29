#include <bits/stdc++.h>
using namespace std;

void erased(char c, string &word) {
    int i = word.find(c);
    while (i != string::npos) {
        word.erase(i, 1);
        i = word.find(c);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    char c; string word;
    while (cin >> c >> word) {
        erased(c, word);
        cout << word << endl;
    }
    return 0;
}
