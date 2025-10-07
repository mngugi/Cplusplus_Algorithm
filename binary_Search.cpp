/*
The binary_search() function is an efficient algorithm to check if a value exists in a data range.

The data range must already be sorted. If the data range is not sorted then the function may return an incorrect result.
The sort() function can be used to sort elements in the data range.

The range of data is specified by iterators.


**/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int > numbers = {2,9,3,4,5,7};
    sort(numbers.begin(), numbers.end());

    if (binary_search( numbers.begin(), numbers.end(), 4)) {
            cout << "the number 4 was found";

    } else {

            cout << "the number 4 was not found.";

    }

    return 0;


}
