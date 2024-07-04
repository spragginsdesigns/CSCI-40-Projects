#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

// Function to calculate the mean of the array
double calculateMean(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// Function to calculate the median of the array
double calculateMedian(int arr[], int size) {
    // Sort the array
    sort(arr, arr + size);

    if (size % 2 == 0) {
        // If the size is even, take the mean of the two central numbers
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        // If the size is odd, take the central number
        return arr[size / 2];
    }
}

// Optional Insane Mode: Function to calculate the mode of the array
vector<int> calculateMode(const int arr[], int size) {
    vector<int> mode;
    int maxCount = 0;
    int currentCount = 1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mode.clear();
            mode.push_back(arr[i]);
        } else if (currentCount == maxCount) {
            mode.push_back(arr[i]);
        }
    }

    return mode;
}

int main() {
    int drinksConsumed[21] = {0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 7};
    int size = sizeof(drinksConsumed) / sizeof(drinksConsumed[0]);

    // Calculate mean
    double mean = calculateMean(drinksConsumed, size);
    cout << "Mean number of drinks consumed: " << mean << endl;

    // Calculate median
    double median = calculateMedian(drinksConsumed, size);
    cout << "Median number of drinks consumed: " << median << endl;

    // Optional Insane Mode: Calculate mode
    vector<int> mode = calculateMode(drinksConsumed, size);
    cout << "Mode number of drinks consumed: ";
    for (int value : mode) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
