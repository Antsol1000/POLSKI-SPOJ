#include <bits/stdc++.h>
using namespace std;

int A[10];
int ptr = 0;

void push(int a) {
    if (ptr == 10)
        printf(":(\n");
    else {
        A[ptr++] = a;
        printf(":)\n");
    }
}

void pop() {
    if (ptr == 0)
        printf(":(\n");
    else
        printf("%d\n", A[--ptr]);
}

int main() {
    char c;
    int n;
    while (scanf("%c", &c) != -1) {
        if (c == '+') {
            scanf("%d", &n);
            push(n);
        }
        else if (c == '-'){
            pop();
        }
    }
    return 0;
}
