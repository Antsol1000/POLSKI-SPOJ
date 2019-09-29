#include<bits/stdc++.h>
using namespace std;

struct line {
    int A, B, C;
    line (int x1, int y1, int x2, int y2) :
        A(y1 - y2), B(x2 - x1), C(x1 * y2 - y1 * x2) {}
    bool isOnLine(int x, int y);
};

bool line::isOnLine(int x, int y) {
    if (A*x + B*y + C == 0)
        return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        line k(x1, y1, x2, y2);
        if (k.isOnLine(x3, y3))
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    return 0;
}
