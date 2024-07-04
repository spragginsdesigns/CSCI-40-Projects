#include <iostream>
using namespace std;

int main() {
    // Print program description
    cout << "This program finds the largest value in an array of integers." << endl;
    cout << "The array contains: 5, 12, 3, 19, -4, 22, 8, 7" << endl;
    cout << "----------------------------------------" << endl;

    // Initialize array
    int arr[] = {5, 12, 3, 19, -4, 22, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Set initial max value
    int max_value = arr[0];

    // Find max value
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    // Output result
    cout << "The largest value in the array is: " << max_value << endl;

    return 0;
}
