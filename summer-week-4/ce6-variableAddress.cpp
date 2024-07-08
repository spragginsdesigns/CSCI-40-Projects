#include <iostream>

// Main function
int main() {
    int age;

    // Ask the user to enter their age
    std::cout << "Please enter your age: ";
    std::cin >> age;

    // Display the memory location where the age is stored
    std::cout << "Your age is stored at memory location: " << &age << std::endl;

    return 0;
}