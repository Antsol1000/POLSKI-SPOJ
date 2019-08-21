#include<bits/stdc++.h>
using namespace std;

int longestBinarySubstring(int length, int nBits, string binaryString) {
    // we will try caterpillar
    int longestSubstring = 0;
    int be = 0, en = 0;
    int temp = 0; //num of bits in substring
    while (en < length) {
            if (binaryString[en] == '0') {
                // if is zero just add it to substring
                en++;
            }
            else {
                if (temp < nBits) {
                    // if is bit and there are not to many bits in substring
                    // add it to substring
                    en++;
                    temp++;
                }
                else { // if substring has to many bits
                    // remove one bit from the substring
                    while (binaryString[be] != '1') {
                        be++;
                    }
                    be++;
                    en++;
                }
            }
            if (en - be > longestSubstring) { // en is one position after the real end
                // so length is en - be not en - be + 1
                // and we check it every time
                longestSubstring = en - be;
            }
    }
    return longestSubstring;
}

int main() {
    ios_base::sync_with_stdio(0);
    int nTests; cin >> nTests;
    while (nTests--){
        int length, nBits; string binaryString;
        cin >> length >> nBits >> binaryString;
        cout << longestBinarySubstring(length, nBits, binaryString) << "\n";
        }
}
