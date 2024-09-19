/*
source: cp4 - 1.3.4.1 ej7
desc: generate all permutations of {'A', 'B', ..., 'J'}
tags: permutations
difficulty: easy
approach: just use next_permutation
*/
#include <algorithm>
#include <array>
#include <ios>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  array<char, 10> letters{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  while (next_permutation(letters.begin(), letters.end())) {
    for (char x : letters) cout << x;
    cout << '\n';
  }

  return 0;
}
