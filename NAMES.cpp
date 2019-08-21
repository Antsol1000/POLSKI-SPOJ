#include <bits/stdc++.h>
using namespace std;

string cut(string name) {
    int i = name.rfind(' ');
    name.erase(0, i+1);
    for (auto & c : name) c = toupper(c);
    return name;
}

struct compare {
    bool operator()  (const pair<string, int> &a, const pair<string, int> &b) const {
        if (a.second > b.second)
            return true;
        else if (a.second == b.second && a.first < b.first)
            return true;
        return false;
    }
};

int main () {
    ios_base::sync_with_stdio(0);
    string name;
    map <string, int> M;
    while (getline(cin, name)) {
        name = cut(name);
        M[name]++;
    }
    set < pair<string, int> , compare> S;
    for (auto i : M)
        S.insert(make_pair(i.first, i.second));
    for (auto i : S)
        cout << i.first << " " << i.second << "\n";
    return 0;
}
