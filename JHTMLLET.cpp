#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    c = getchar();
    bool tag = false;
    while (c != EOF) {
        if (c == '<') {
            putchar(c);
            c = getchar();
            while (c != '>') {
                putchar(toupper(c));
                c = getchar();
            }
        }
        putchar(c);
        c = getchar();
    }
    return 0;
}
