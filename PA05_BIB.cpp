#include <bits/stdc++.h>
using namespace std;

struct compare {
    bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
        if (a.first < b.first)
            return true;
        else if (a.first == b.first && a.second > b.second)
            return true;
        else
            return false;
    }
};

void library() {
    int n; cin >> n;
    multiset < pair<int, int>, compare> A;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        A.insert(make_pair(x, i+1));
    }
    vector < pair<int, int> > pos;
    long long int cost = 0;
    while (A.size() > 1) {
        auto i = A.begin();
        auto j = i++;\
        int pos1 = (*j).second;
        int pos2 = (*i).second;
        if (pos1 > pos2)
            swap(pos1, pos2);
        pos.push_back(make_pair(pos1, pos2));
        int value = (*j).first + (*i).first;
        cost += value;
        A.insert(make_pair(value, pos1));
        A.erase(A.begin());
        A.erase(A.begin());
    }
    cout << cost << "\n";
    for (auto i : pos)
        cout << i.first << " " << i.second << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        library();
    }
}
