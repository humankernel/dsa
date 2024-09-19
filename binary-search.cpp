/*
source: cp4 - 1.3.4.1 ej6
desc:
    given a list of **sorted** integers L of size up to 1M items. Determine if a
value v exists on L with no more than 20 comparisons tags: binary-search
difficulty: easy
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  vector<int> nums;

  cin >> n;
  while (n--) {
    cin >> x;
    nums.push_back(x);
  }

  // find
  int num;
  cin >> x;
  cout << binary_search(nums.begin(), nums.end(), x);

  return 0;
}
