/*
 * Project #2: Temperature of a Cooling Body
 * Author: Austin Spraggins
 * Student ID: 0524626
 * Date: 06/17/2024
 * Instructor: Brian Baker
 *
 * This program calculates the temperature of a body at 1-hour intervals after death
 * using Newton's Law of Cooling. It prints the temperature at the time of death
 * and at each subsequent hour up to 4 hours after death.
 */

#include <iostream>
using namespace std;

int main() {
    // Declare variables for temperatures at each hour
    double temperature0, temperature1, temperature2, temperature3, temperature4;

    // Prompt the user to enter the starting temperature of the body
    cout << "Enter the starting temperature of the body: ";
    cin >> temperature0;

    // Calculate temperatures at each hour using Newton's Law of Cooling
    // Temperature after 1 hour
    temperature1 = temperature0 + (27 - temperature0) * 0.2;

    // Temperature after 2 hours
    temperature2 = temperature1 + (27 - temperature1) * 0.2;

    // Temperature after 3 hours
    temperature3 = temperature2 + (27 - temperature2) * 0.2;

    // Temperature after 4 hours
    temperature4 = temperature3 + (27 - temperature3) * 0.2;

    // Print the temperatures
    cout << "Starting temperature: " << temperature0 << endl;
    cout << "Temperature after 1 Hour: " << temperature1 << endl;
    cout << "Temperature after 2 Hours: " << temperature2 << endl;
    cout << "Temperature after 3 Hours: " << temperature3 << endl;
    cout << "Temperature after 4 Hours: " << temperature4 << endl;

    return 0;
}
