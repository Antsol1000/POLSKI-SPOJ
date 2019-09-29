#include <iostream>
using namespace std;

int change(char a) {
    if (a < 'k')
        return a - 'a' + 1;
    if (a <= 't')
        return (a - 'k' + 1)*10;
    if (a == 'v')
        return 200;
    return (a - 'x' + 3)*100;
}

int fun(string a) {
    int res = 0;
    for (int i = 0; i < a.size(); i++)
        res += change(a[i]);
    return res;
}

int main() {
    string a;
    cin >> a;
    cout << fun(a);
}
