#include <iostream>

using namespace std;

void printfloat(float number) {
    cout << hex << (unsigned int) ((unsigned char*)(&number))[3] << " ";
    cout << hex << (unsigned int) ((unsigned char*)(&number))[2] << " ";
    cout << hex << (unsigned int) ((unsigned char*)(&number))[1] << " ";
    cout << hex << (unsigned int) ((unsigned char*)(&number))[0] << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        float x;
        cin >> x;
        printfloat(x);
    }
}
