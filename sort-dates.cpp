/*
source: cp4 - 1.3.4.1 ej5
desc:
    given n birthdates in triples (DD, MM, YYYY). Orden
    1. first by ascending birth months (MM)
    2. second asc birth dates (DD)
    3. asc age
tags: sort
difficulty: easy
*/
#include <algorithm>
#include <iostream>
#include <vector>

struct Date {
  int day, month, year;
};

int main() {
  int t;
  std::cin >> t;

  int d, m, y;
  std::vector<Date> dates;
  while (t--) {
    std::cin >> d >> m >> y;
    dates.push_back(Date{.day = d, .month = m, .year = y});
  }

  auto cmp1 = [](Date x, Date y) {
    if (x.month != y.month)
      return x.month - y.month;
    if (x.day != y.day)
      return x.day - y.day;
    return (2024 - y.year) - (2024 - x.year);
  };

  auto cmp2 = [](Date x, Date y) {
      return (x.month - y.month) + (x.day - y.day) + ((2024 - y.year) - (2024 - x.year));
  };

  std::sort(dates.begin(), dates.end(), cmp1);

  for (Date da : dates) {
    std::cout << da.day << ' ' << da.month << ' ' << da.year << '\n';
  }

  return 0;
}
