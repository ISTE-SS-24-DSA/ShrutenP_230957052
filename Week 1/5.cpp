#include <iostream>

void printPattern(int rows) {
    int stars = 1;
    int spaces = rows;
    for (int i=1;i<=rows;i++)
    {
        for (int j=1;j<spaces;j++)
            std::cout << " ";

        for (int k=1;k<=stars;k++)
            std::cout << "*" ;

        stars += 2;
        spaces--;
        std::cout << std::endl;
    }

}

int main()
{
    int n;
    std::cin >> n;
    printPattern(n);
    return 0;
}
