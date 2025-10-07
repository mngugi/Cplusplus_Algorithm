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
