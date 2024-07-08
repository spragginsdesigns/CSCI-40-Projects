#include <iostream>
using namespace std;

double fahrenheitToCelsius(double f);
double calculateMoles(double molecularMass, double totalMass);
double distanceFallen(double time);
int fibonacci(int n);

int main() {
    // Test temperature conversion
    double temp_f = 98.6;
    double temp_c = fahrenheitToCelsius(temp_f);
    cout << temp_f << " F is " << temp_c << " C" << endl;

    // Test moles calculation
    double molecularMass = 55.85; // molecular mass of Iron
    double totalMass = 100.0;
    double moles = calculateMoles(molecularMass, totalMass);
    cout << "Number of moles: " << moles << endl;

    // Test falling distance
    double t = 3.2; // time in seconds
    double d = distanceFallen(t);
    cout << "Distance fallen in " << t << " seconds: " << d << " meters" << endl;

    // Optional: Test Fibonacci sequence
    int position = 10;
    int fibNumber = fibonacci(position);
    cout << "Fibonacci number at position " << position << " is " << fibNumber << endl;

    return 0;
}

// Convert Fahrenheit to Celsius
double fahrenheitToCelsius(double f) {
    return (f - 32) / 1.8;
}

// Calculate number of moles
double calculateMoles(double molecularMass, double totalMass) {
    return totalMass / molecularMass;
}

// Calculate distance fallen due to gravity
double distanceFallen(double time) {
    const double g = 9.8; // acceleration due to gravity in m/s^2
    return 0.5 * g * time * time;
}

// Get Fibonacci number at position n (optional)
int fibonacci(int n) {
    if (n <= 1) return n;
    int prev = 0, curr = 1;
    for (int i = 2; i <= n; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}
