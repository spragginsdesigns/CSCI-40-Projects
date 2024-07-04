#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

// Function to calculate the number of moles
double calculateMoles(double molecularMass, double totalMass) {
    return totalMass / molecularMass;
}

// Function to calculate the distance fallen due to gravity
double distanceFallen(double time) {
    const double g = 9.8; // acceleration due to gravity in m/s^2
    return 0.5 * g * time * time;
}

// Optional: Function to calculate the Fibonacci sequence
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    // Test Fahrenheit to Celsius Conversion Function
    double fahrenheit = 98.6;
    cout << fahrenheit << " F is " << fahrenheitToCelsius(fahrenheit) << " C" << endl;

    // Test Moles Calculation Function
    double molecularMass = 55.85; // Molecular mass of Iron (Fe)
    double totalMass = 100.0; // Total mass in grams
    cout << "Number of moles of Iron: " << calculateMoles(molecularMass, totalMass) << endl;

    // Test Distance Fallen Calculation Function
    double time = 3.2;
    cout << "Distance fallen in " << time << " seconds: " << distanceFallen(time) << " meters" << endl;

    // Test Fibonacci Sequence Function (Optional Hard Mode)
    int position = 10;
    cout << "Fibonacci number at position " << position << " is " << fibonacci(position) << endl;

    return 0;
}
