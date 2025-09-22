
// C++ algorithm adjacent_find() function
// References : https://www.w3schools.com/cpp/ref_algorithm_adjacent_find.asp

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Ford", "Mazda"};

    // find the first pair of equal adjacent elements
    auto it = std::adjacent_find(cars.begin(), cars.end());

    if (it != cars.end()) {
        std::cout << *it << " appears twice in a row\n";
    } else {
        std::cout << "There are no adjacent equal elements\n";
    }

    return 0;
}

/*
The adjacent_find() function finds the first adjacent pair in a data range and returns
an iterator pointing to the first element in the pair.
An adjacent pair is a pair of elements that have the same value and are next to each
other (adjacent) in the data range.
startRequired. An iterator pointing to the start of the data range being searched.
end	Required. An iterator pointing to the end of the data range being searched.
Elements up to this position will be searched, but the element at this position will not be included.
*/
