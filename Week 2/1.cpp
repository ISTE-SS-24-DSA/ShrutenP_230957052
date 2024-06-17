#include <bits/stdc++.h>

int main() {
    // Create an empty set of integers
    std::set<int> mySet;

    // Add elements to the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);

    // Print all elements currently in the set
    std::cout << "Elements in the set: ";
    for (const int& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if a certain element exists in the set
    int key = 30;
    if (mySet.find(key) != mySet.end()) {
        std::cout << "Found" << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}
