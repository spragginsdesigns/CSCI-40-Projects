#include <iostream>
#include <limits>

int hailstoneSteps(long long n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            // Check for potential overflow
            if (n > (std::numeric_limits<long long>::max() - 1) / 3) {
                std::cout << "Overflow detected. Stopping the program.\n";
                return -1;  // Indicate an error
            }
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}

int main() {
    long long seed = 1;

    while (true) {
        int steps = hailstoneSteps(seed);

        if (steps == -1) {
            break;  // Stop if overflow is detected
        }

        std::cout << "Seed: " << seed << "  Steps: " << steps << std::endl;

        // Check for potential overflow before incrementing seed
        if (seed == std::numeric_limits<long long>::max()) {
            std::cout << "The maximum possible seed value has been reached.\n";
            break;
        }

        seed++;
    }

    return 0;
}