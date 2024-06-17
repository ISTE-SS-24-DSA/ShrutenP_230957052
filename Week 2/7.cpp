#include <iostream>

bool isPalin(std::string str){
    if (str.length() <= 1) {
        return true;
    }
    if (str[0] != str[str.length() - 1]) {
        return false;
    }
    return isPalin(str.substr(1, str.length() - 2));
}

int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    if (isPalin(str)) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not a palindrome" << std::endl;
    }
    return 0;
}