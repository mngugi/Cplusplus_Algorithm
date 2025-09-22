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