
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool less_than_10(int value) {
  return value < 10;
}

int main() {
  vector<int> numbers = {1, 7, 3, 5, 9, 2};
  if (all_of(numbers.begin(), numbers.end(), less_than_10)) {
    cout << "All of the numbers are less than 10";
  } else {
    cout << "Some numbers are not less than 10";
  }

  return 0;
}
