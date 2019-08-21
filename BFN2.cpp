#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 46341;
bool tablica[MAX_N + 1];
int tabliczka[1000001];
vector<int> pierwsze;
vector<int> wynik;

void sito() {
    for (int i = 2; i < MAX_N; i++)
        tablica[i] = true;
    for (int i = 2; i*i <= MAX_N; i++) {
        if (tablica[i]) {
            for (int j = i*i; j < MAX_N; j += i)
                tablica[j] = false;
        }
    }
    for (int i = 2; i < MAX_N; i++)
        if (tablica[i])
            pierwsze.push_back(i);
    return;
}

void sitko(int a, int b) {
    int j = 0;
    for (int i = a; i <= b; i++) {
        tabliczka[j] = i;
        j++;
    }
    j--;
    for (int i = 0; i < pierwsze.size(); i++) {
        int pocz;
        if (a%pierwsze[i] == 0)
            pocz = 0;
        else
            pocz = pierwsze[i] - a%pierwsze[i];
        for (int g = pocz; g <= j; g += pierwsze[i]) {
            if (!(tabliczka[g] == pierwsze[i]))
                tabliczka[g] = -1;
        }
    }
    for (int i = 0; i <= j; i++) {
        if(tabliczka[i] != -1)
            wynik.push_back(tabliczka[i]);
    }
    return;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    sito();
    int testy;
    cin >> testy;
    while (testy--) {
        int a, b;
        cin >> a >> b;
        sitko(a, b);
        for (int i = 0; i < wynik.size(); i++)
            cout << wynik[i] << "\n";
        wynik.clear();
    }
    return 0;

}
