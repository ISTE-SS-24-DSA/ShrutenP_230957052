#include <iostream>

int Fib(int n) {
    if (n <= 1) {
        return n;
    }
    return Fib(n - 1) + Fib(n - 2);
}

// Tail-optimization
int FibTail(int n, int a = 0, int b = 1) {
    if (n == 0) {
        return a;
    }
    if (n == 1) {
        return b;
    }
    return FibTail(n - 1, b, a + b);
}

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << FibTail(i) << " ";
    }

    return 0;
}