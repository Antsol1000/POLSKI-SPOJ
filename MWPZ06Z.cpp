#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while (t--) {
        int div; cin >> div;
        string number; cin >> number;
        int num; // last two digits of input number
        if (number.size() > 2)
            num = stoi(number.substr(number.size() - 2));
        else
            num = stoi(number);
        if (num % div == 0)
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    return 0;
}
