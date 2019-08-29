#include <iostream>
using namespace std;

typedef long long int LL;

LL eulerPhi(LL number) { // phi Euler  function

    /* we calculate phi(n)
    we use recursive function
    phi is muliplicative so phi(n) = phi(a)phi(b)
    where ab = n and gcd(a, b) = 1
    we use formula phi(prime^alhpa) = prime^alpha - prime^(alpha-1) */

    if (number <= 3) // if number is 2 or 3 phi(number) = 2
        return 1;
    for (LL prime = 2; prime*prime <= number; prime++) {
        // for loop like in eratostenes
        if (number % prime == 0) {
            // if number is divisible by prime
            // we caluculate max alpha such that
            // number % prime^alpha == 0
            LL primeAlpha1 = 1, primeAlpha = prime; // prime^alpha - 1, prime^alpha
            number /= prime;
            while (number % prime == 0) {
                //till the n is divisible by prime
                primeAlpha1 = primeAlpha;
                primeAlpha *= prime;
                number /= prime;
            }
            return (primeAlpha - primeAlpha1) * eulerPhi(number);
        }
    }
    return number - 1; // if number is prime phi(number) = number - 1
}

int main() {
    ios_base::sync_with_stdio(0);
    int nTests;
    cin >> nTests;
    while (nTests--) {
        long long n;
        cin >> n;
        cout << eulerPhi(n) << "\n";
    }
    return 0;
}
