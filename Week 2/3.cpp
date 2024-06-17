#include <bits/stdc++.h>

int main() {
    // Initialize the keys and arr arrays
    std::vector<std::string> keys = {"csdb", "dsh", "askj", "adfs"};
    std::vector<int> arr = {10, 20, 30, 40};
    int N = keys.size(); // Assuming both arrays are of the same size

    // Get the key to search
    std::string S;
    std::cout << "Enter the key to search: ";
    std::cin >> S;

    // Create an unordered_map to store key-value pairs
    std::unordered_map<std::string, int> keyValueMap;

    // Populate the map with keys and their corresponding values from the arrays
    for (int i = 0; i < N; ++i) {
        keyValueMap[keys[i]] = arr[i];
    }

    // Check if the key S is present in the map
    if (keyValueMap.find(S) != keyValueMap.end()) {
        std::cout << "Value for key " << S << " is: " << keyValueMap[S] << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
