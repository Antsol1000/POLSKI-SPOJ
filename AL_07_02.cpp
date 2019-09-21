#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void voyage(ll bx, ll by, ll ex, ll ey, ll days) {
	long long y = ey - by;
	long long x = ex - bx;
	string weather;
	cin >> weather;
    int i = 0;
    char c;
	while (x != 0 || y != 0) {
        if (i == days)
			break;
		i++;
		c = weather[i-1];
		switch(c) {
			case 'N':
				if (y > 0) y--;
				break;
			case 'S':
				if (y < 0) y++;
				break;
			case 'E':
				if (x > 0) x--;
				break;
			case 'W':
				if (x < 0) x++;
				break;
		}
	}
	if (x == 0 && y == 0)
		cout << i << endl;
	else
		cout << "NIE\n";

}

int main() {
	ios_base::sync_with_stdio(0);

	int t; cin >> t;
	while (t--) {
		ll bx, by, ex, ey, days;
		cin >> bx >> by >> ex >> ey >> days;
		voyage(bx, by, ex, ey, days);
	}

	return 0;
}
