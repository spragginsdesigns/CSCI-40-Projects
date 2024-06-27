#include <iostream>

// Function to calculate the number of steps in the Hailstone sequence
int hailstoneSteps(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}

int main() {
    int start;
    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> start;

    // Verify the input is a positive integer
    while (start <= 0) {
        std::cout << "That is not a positive integer. Enter a positive integer: ";
        std::cin >> start;
    }

    // Calculate and display the number of steps for the input
    int steps = hailstoneSteps(start);
    std::cout << "Number of steps = " << steps << std::endl;

    // Optional hard mode: check all positive integers starting from 1
    for (int i = 1; i <= start; ++i) {
        steps = hailstoneSteps(i);
        std::cout << "Seed: " << i << "  Steps: " << steps << std::endl;
    }

    return 0;
}
