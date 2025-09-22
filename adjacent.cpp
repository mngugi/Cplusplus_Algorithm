/*
adjacent_find
    - Returns the first iterator to the first pair of elements that are equal to each other (as determined by the specified predicate).
    - If no such pair is found, the function returns last.
*/
//reference:
// https://cplusplus.com/reference/algorithm/adjacent_find/
/*
- start: the first iterator to the first pair of elements that are equal to each other
- end: the last iterator to the last pair of elements that are equal to each other.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Ford", "Mazda"};
  // find the first pair of elements that are equal to each other
  // in this case, the first pair of elements that are equal to each other is "Ford"
  // so the iterator will be the second "Ford"
  // and the value of the iterator will be "Ford"
  // the second pair of elements that are equal to each other is "Mazda"
  // so the iterator will be the third "Mazda"
  // and the value of the iterator will be "Mazda"
   
  
  auto it = adjacent_find(cars.begin(), cars.end());

  if (it != cars.end()) {
    cout << *it << " Appears twice in a row\n";
  } else {
    cout << "There are no Adjacent elements\n";
  }
  return 0;
}
