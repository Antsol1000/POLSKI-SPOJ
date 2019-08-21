#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value = 0;
    Node *father;
};

class Tree {
public:
    int V;
    Node *T;

public:

    Tree(int V);

    void addEdge(int &a, int &b);

    int sumTree();

};

Tree::Tree(int V) {
    this->V = V;
    T = new Node[V+1];
}

void Tree::addEdge(int &a, int &b) {
    if (a > b)
        swap(a, b);
    T[b].father = &T[a];
}

int Tree::sumTree() {
    for (int i = V-1; i > 0; i--) {
        (*T[i].father).value += T[i].value + 1;
    }
    int summary = 0;
    for (int i = 0; i < V; i++)
        summary += 2*T[i].value + 1;
    return summary;
}

int main() {
    ios_base::sync_with_stdio(0);
    int nTests; cin >> nTests;
    while (nTests--) {
        int V; cin >> V;
        Tree t(V);
        for (int i = 0; i < V-1; i++) {
            int a, b;
            cin >> a >> b;
            t.addEdge(a, b);
        }
        cout << t.sumTree() << "\n";
    }
    return 0;
}
