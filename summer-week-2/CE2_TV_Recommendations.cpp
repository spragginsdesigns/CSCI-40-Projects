// Created by Austin Spraggins
// CE2 TV Recommendations
// This program asks the user for their age and then recommends a TV show based on their age.


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
