#include <iostream>
#include <string>
#include <iomanip>

struct employee {
    std::string name;
    double payRate;
    double hours;
};

// Calculate pay for an employee
double calculatePay(const employee& emp) {
    const double OVERTIME_THRESHOLD = 40.0;
    const double OVERTIME_RATE = 1.5;

    double regularPay = 0.0;
    double overtimePay = 0.0;

    if (emp.hours <= OVERTIME_THRESHOLD) {
        regularPay = emp.hours * emp.payRate;
    } else {
        regularPay = OVERTIME_THRESHOLD * emp.payRate;
        overtimePay = (emp.hours - OVERTIME_THRESHOLD) * (emp.payRate * OVERTIME_RATE);
    }

    return regularPay + overtimePay;
}


int main() {
    // Create an employee
    employee a;

    // Set empployee details
    a.name = "Austin Spraggins";
    a.payRate = 30.00;
    a.hours = 40.0;

    // Calculate and display the employee's pay
    // Note: I included the <iomanip> header to display my IRL pay statement more clearly and accurately
    std::cout << "Employee Pay Statement" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "Name: " << a.name << std::endl;
    std::cout << "Hourly Rate: $" << std::fixed << std::setprecision(2) << a.payRate << std::endl;
    std::cout << "Hours Worked: " << a.hours << std::endl;
    std::cout << "Schedule: Monday-Friday, 9:00 AM - 5:30 PM (30 min lunch)" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Total Pay: $" << std::fixed << std::setprecision(2) << calculatePay(a) << std::endl;
    std::cout << "======================" << std::endl;

    return 0;
}