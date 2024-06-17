#include <bits/stdc++.h>

int main() {
    // Initialize an array of integers
    std::vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    // Create an unordered_map to store the frequency of elements
    std::unordered_map<int, int> frequencyMap;

    // Count the frequency of each element in the array
    for (int num : arr) {
        frequencyMap[num]++;
    }

    // Print the frequency of each element
    std::cout << "Element Frequency" << std::endl;
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
