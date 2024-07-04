#include <iostream>

using namespace std;

int main() {
    // Declare a variable to store the user's age
    int age;

    // Ask the user to enter their age
    cout << "Please enter your age: ";
    cin >> age;

    // Display the memory location where the age is stored
    cout << "Your age is stored at memory location: " << &age << endl;

    return 0;
}
