#include <bits/stdc++.h>

int main(){
    std::vector<int> vec = {1, 2, 3, 4, 5};

    //use of iterator
    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    for(std::vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){
        std::cout << *it << " ";
    }
}