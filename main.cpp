#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;

    if ((x != 0) || (y != 0)) {
        std::cout << "Multiplication: " << x * y << std::endl;
        std::cout << "Division: " << x / y << std::endl;
        std::cout << "Remainder: " << x % y << std::endl;
        std::cout << "Square Root: " << sqrt(x) << std::endl;
    } else {
        std::cout << "Addition: " << x + y << std::endl;
        std::cout << "Subtraction: " << x - y << std::endl;
        std::cout << "Square: " << pow(x, y) << std::endl;
    }

    return 0;
}
