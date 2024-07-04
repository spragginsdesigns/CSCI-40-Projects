#include <iostream>

double abs(double x) {
    if (x < 0) {
        return x * -1;
    }
    return x;
}

int main() {
    double n;
    // Prints a header for the program
    std::cout << "This program demonstrates the absolute value function:" << std::endl;
    std::cout << "It will show the absolute value of 5.3, -13, and 3.14 * -42." << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    n = abs(5.3);
    std::cout << "abs(5.3) = " << n << std::endl;

    n = abs(-13);
    std::cout << "abs(-13) = " << n << std::endl;

    n = abs(3.14 * -42);
    std::cout << "abs(3.14 * -42) = " << n << std::endl;

    return 0;
}
