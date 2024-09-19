/*
source: cp4 - 1.3.4.1 ej11
desc: Given an integer X that can contain up to 20 digits,
    output ‘Prime’ if X is a prime or ‘Composite’ otherwise
approach:
    criba doesn't work, to expensive, SIGV
    look into miller-rabin primality test
difficulty: medium
status: unfinished
complexity:
    time: O(n) ~ 2.5s = 10^20 iter
    space: O(1)
*/
#include <cstdint>
#include <iostream>
using namespace std;

bool is_prime(uint64_t x) {
    if (x <= 1) return false;

    for (int i=2; i < x; i++)
        if (x % i == 0) return false;

    return true;
}

int main() {
    uint64_t x;
    cin >> x;

    if (is_prime(x)) cout << "Prime";
    else cout << "Composite";

    return 0;
}
