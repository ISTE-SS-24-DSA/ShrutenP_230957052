#include <bits/stdc++.h>

int main(){

    // initialize vector and take input
    std::vector<int> vec;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        vec.push_back(x);
    }

    // sort vector
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector: " << std::endl;
    for(auto i: vec) std::cout << i << " ";
    std::cout << std::endl;

    // reverse vector
    std::reverse(vec.begin(), vec.end());
    std::cout << "Reversed vector: " << std::endl;
    for(auto i: vec) std::cout << i << " ";
    std::cout << std::endl;
}