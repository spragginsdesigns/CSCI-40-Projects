#include <iostream>
#include <string>

int main() {
    int age;
    std::string recommendation;

    std::cout << "Enter age: ";
    std::cin >> age;

    if (age < 18) {
        recommendation = "Try watching Family Guy.";
    } else {
        recommendation = "Try watching Mr. Robot.";
    }

    std::cout << recommendation << std::endl;

    return 0;
}
