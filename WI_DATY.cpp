#include <bits/stdc++.h>
using namespace std;

int bin2int (string a) {
	int result = 0;
	for (int i = 0; i < a.size(); i++) {
		result *= 2;
		result += int(a[i] - '0');
	}
	return result;
}

string int2bin (int a) {
	if (a == 0)
		return "0";
	string result = "";
	while (a) {
		result = char(a%2 + '0') + result;
		a /= 2;
	}
	return result;
}

bool checkDate(int year, int month, int day) {
	if (year <1980 || year > 2107 )
		return 0;
	if (day == 0 || day > 31)
		return 0;
	if (month == 0 || month > 12)
		return 0;
	if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) )
		return 0;
	if (day == 30 && month == 2)
		return 0;
	if (day == 29 && month == 2 && !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		return 0;
	return 1;

}

void printDate(int year, int month, int day) {
		string syear = int2bin(year - 1980);
		while (syear.size() < 7) syear = '0' + syear;
		string smonth = int2bin(month);
		while (smonth.size() < 4) smonth = '0' + smonth;
		string sday = int2bin(day);
		while (sday.size() < 5) sday = '0' + sday;
		cout << syear << smonth << sday;
}

void bin2norm (string a) {
	int year = 1980 + bin2int(a.substr(0, 7));
	int month = bin2int(a.substr(7, 4));
	int day = bin2int(a.substr(11, 5));
	if (!checkDate(year, month, day))
		cout << "ERROR";
	else {
		cout << year << "-";
		if (month / 10 == 0)
			cout << 0;
		cout << month << "-";
		if(day / 10 == 0)
			cout << 0;
		cout << day;
	}
}

void norm2bin (string a) {
	int year = stoi(a.substr(0, 4));
	int month = stoi(a.substr(5, 2));
	int day = stoi(a.substr(8, 2));
	if (!(checkDate(year, month, day)))
		cout << "ERROR";
	else {
		printDate(year, month, day);
	}
}

int main() {
	string a;
	cin >> a;
	if (a.size() == 10 && a.find('-') == 4 && a.find('-', 5) == 7)
		norm2bin(a);
	else if (a.size() == 16 && a.find('-') == -1)
		bin2norm(a);
	else
		cout << "ERROR";
	return 0;
}
