#include <bits/stdc++.h>
using namespace std;

void printEdge(string a, string b, string t, int weight) {
    cout << a;
    if (t == "d" || t == "dw")
        cout << " -> ";
    else
        cout << " -- ";
    cout << b;
    if (t == "gw" || t == "dw")
        cout << " [label = " << weight << "]";
    cout << ";\n";
}

void printGraph(string t) {
    if (t == "d" || t == "dw")
        cout << "di";
    cout << "graph {\n";
    int k; cin >> k;
    while (k--) {
        string a, b; int w;
        cin >> a >> b;
        if (t == "dw" || t == "gw")
            cin >> w;
        printEdge(a, b, t, w);
    }
    cout << "}\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        string t; cin >> t;
        printGraph(t);
    }
    return 0;
}

