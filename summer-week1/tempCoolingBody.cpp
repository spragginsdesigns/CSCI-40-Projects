/*
 * Project #2: Temperature of a Cooling Body
 * Author: Austin Spraggins
 * Student ID: 0524626
 * Date: 06/17/2024
 * Instructor: Brian Baker
 *
 * This program simulates the cooling process of a body after death, applying Newton's Law of Cooling.
 * It calculates and displays the body's temperature at hourly intervals up to four hours post-mortem.
 */


#include <iostream>
using namespace std;

int main() {
    // Variables to hold the body's temperature at the time of death and at 1-hour intervals thereafter.
    double initialTemp, tempAfter1Hour, tempAfter2Hours, tempAfter3Hours, tempAfter4Hours;

    // Ask the user for the body's initial temperature.
    cout << "Please enter the body's initial temperature (at time of death): ";
    cin >> initialTemp;

    // Calculate the body's temperature at each hour, up to 4 hours, using Newton's Law of Cooling.
    // The environment temperature is assumed to be 27 degrees Celsius.
    tempAfter1Hour = initialTemp + (27 - initialTemp) * 0.2;
    tempAfter2Hours = tempAfter1Hour + (27 - tempAfter1Hour) * 0.2;
    tempAfter3Hours = tempAfter2Hours + (27 - tempAfter2Hours) * 0.2;
    tempAfter4Hours = tempAfter3Hours + (27 - tempAfter3Hours) * 0.2;

    // Display the calculated temperatures.
    cout << "Initial temperature at time of death: " << initialTemp << " degrees Celsius" << endl;
    cout << "Temperature after 1 hour: " << tempAfter1Hour << " degrees Celsius" << endl;
    cout << "Temperature after 2 hours: " << tempAfter2Hours << " degrees Celsius" << endl;
    cout << "Temperature after 3 hours: " << tempAfter3Hours << " degrees Celsius" << endl;
    cout << "Temperature after 4 hours: " << tempAfter4Hours << " degrees Celsius" << endl;

    return 0;
}