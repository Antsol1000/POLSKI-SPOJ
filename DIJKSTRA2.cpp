#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> iPair;
const int INF = 2000000000;

class Graph {

    int V; // number of nodes

    list <iPair> *adj;

public:
    Graph(int V); // constructor

    void addEdge(int u, int v, int w); // to add edge from u to v with weight w

    void dijkstra(int s, int e); // searching the shortest path between source and end

};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<iPair> [V+1];
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
}

void Graph::dijkstra(int source, int e) {
    priority_queue < iPair, vector<iPair>, greater<iPair> > Q;
    vector <int> dist(V+1, INF);
    Q.push(make_pair(0, source));
    dist[source] = 0;

    while (Q.size()) {
        int u = Q.top().second;
        Q.pop();
        for (auto i : adj[u]) {
            int v = i.first;
            int weight = i.second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                Q.push(make_pair(dist[v], v));
            }
        }
    }

    if (dist[e] == INF)
        cout << "NIE";
    else
        cout << dist[e];
}


int main () {
    ios_base::sync_with_stdio(0);
    int T; cin >> T;
    while (T--) {
        int V, E; cin >> V >> E; // num of verticies and edges
        Graph g(V);
        for (int i = 0; i < E; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            g.addEdge(u, v, w);
        }
        int s, e; cin >> s >> e;
        g.dijkstra(s, e);
        cout << "\n";
    }
}
