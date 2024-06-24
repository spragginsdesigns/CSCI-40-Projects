/*
 * CE1: Perimeter
 * Author: Austin Spraggins
 * Student ID: 0524626
 * Date: 06/23/2024
 * Instructor: Brian Baker
 * Assignment Instructions:
 * I want you to write a short program that asks the user for a number that is the radius of a circle and stores that value in a variable of type double called radius. Then display on the screen the perimeter of a circle with that radius. In case you
 * forgot the formula to calculate perimeter is 2 * radius * 3.14 or whatever approximation of PI you want to use.
 */

// Included limits header to use numeric_limits
#include <iostream>
#include <limits>

int main() {
  // So PI value cannot be modified
  constexpr double PI = 3.14159265358979323846;

  std::cout << "Please Enter a Positive Number for the Radius of the Circle: ";
  double radius;
  // Validation loop to ensure the user enters a positive number
  while (!(std::cin >> radius) || radius < 0) {
    // Clears the error flag on cin
    std::cin.clear();
    // Skip to the next newline to ignore the rest of the input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid Input. Please Enter a Positive Number for the Radius of the Circle: ";
  }

  double perimeter = 2 * radius * PI;

  std::cout << "The Perimeter of the Circle is: " << perimeter << std::endl; // Output of program

  return 0;
}