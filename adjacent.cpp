/*
adjacent_find
    - Returns the first iterator to the first pair of elements that are equal to each other (as determined by the specified predicate).
    - If no such pair is found, the function returns last.
*/
//reference:
// https://cplusplus.com/reference/algorithm/adjacent_find/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Ford", "Mazda"};
  auto it = adjacent_find(cars.begin(), cars.end());

  if (it != cars.end()) {
    cout << *it << " appears twice in a row\n";
  } else {
    cout << "There are no adjacent elements\n";
  }
  return 0;
}
