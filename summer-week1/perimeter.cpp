/*
 * CE1: Perimeter
 * Author: Austin Spraggins
 * Student ID: 0524626
 * Date: 06/17/2024
 * Instructor: Brian Baker
 */
#include <iostream>

int main() {
  double radius;
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  double perimeter = 2 * radius * 3.14;
  std::cout << "The perimeter of the circle is: " << perimeter << std::endl;

  return 0;
}