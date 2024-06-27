#include <iostream>
#include <iomanip>

int main() {
  double balance = 100.0; // Initialize balance to 100
  int year = 2023;        // Initialize year to the current year (2023)

  std::cout << "Projected Value of a $100 Bill Over 20 Years, Accounting for Inflation:" << std::endl; // Print statment to help user understand the program's output.

  // Loop to iterate over 20 years
  for (int i = 0; i < 20; ++i) {
    // Print the current year and balance
    std::cout << year << " " << std::fixed << std::setprecision(6) << balance << std::endl;

    // Increment the year
    year += 1;

    // Decrease balance by 3%
    balance = balance * 0.97;
  }

  return 0;
}