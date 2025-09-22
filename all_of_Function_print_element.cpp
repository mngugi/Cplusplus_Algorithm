
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {1, 7, 3, 5, 9, 12};

    // find the maximum element in the vector
    auto max_it = max_element(numbers.begin(), numbers.end());

    if (max_it != numbers.end()) {
        cout << "The largest number is: " << *max_it << endl;
    } else {
        cout << "The vector is empty." << endl;
    }

    return 0;
}
