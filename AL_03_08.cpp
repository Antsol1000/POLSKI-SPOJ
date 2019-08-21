#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int max1 = -1;
    int max2 = -2;
    int min = 2000000000;
    while (cin >> a && a != 0) {
        if (a > max1) {
            max2 = max1;
            max1 = a;
        }
        else if(a > max2 && a != max1) {
            max2 = a;
        }
        if (a < min)
            min = a;
    }
    if (max1 == min)
        cout << max1;
    else
        cout << max2;
}
