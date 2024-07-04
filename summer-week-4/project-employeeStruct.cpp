#include <iostream>
#include <string>

using namespace std;

// Define the employee structure
struct employee {
    string name;
    double payRate;
    double hours;
};

// Function to calculate the pay for an employee
double calculatePay(employee emp) {
    double regularHours = emp.hours > 40 ? 40 : emp.hours;
    double overtimeHours = emp.hours > 40 ? emp.hours - 40 : 0;
    double regularPay = regularHours * emp.payRate;
    double overtimePay = overtimeHours * emp.payRate * 1.5;
    return regularPay + overtimePay;
}

int main() {
    // Create an employee and set values
    employee a;
    a.name = "Sterling Archer";
    a.payRate = 18.50;
    a.hours = 55;

    // Calculate and display the pay for the employee
    cout << a.name << " has earned " << calculatePay(a) << " this week." << endl;

    return 0;
}
