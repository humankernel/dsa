/*
source: cp4 - 1.3.4.1 ej4
desc: given n random integers, print distinct (unique) integers in sorted order
tags: programming-languages set
difficulty: easy
approach:
    insert n numbers to set
*/
#include <iostream>
#include <set>
int main() {
    int n, x;
    std::set<int> numbers;

    std::cin >> n;
    while (n--) {
        std::cin >> x;
        numbers.insert(x);
    }

    for (int num: numbers) {
        std::cout << num <<'\n';
    }
}
