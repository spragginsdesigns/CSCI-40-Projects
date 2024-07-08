#include <iostream>
#include <vector>
// Optional Hard Mode needs <algorithm> for std::sort
#include <algorithm>
// Optional Insane Mode needs <unordered_map> for std::unordered_map
#include <unordered_map>

double calculateMean(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

double calculateMedian(const int arr[], int size) {
    // Create a copy of the array

    std::vector<int> sortedArr(arr, arr + size); // Optinal Hard Mode line included

    // Sort the copy
    std::sort(sortedArr.begin(), sortedArr.end()); // Optinal Hard Mode line included

    if (size % 2 == 0) {
        // If the size is even, average the two middle elements
        return (sortedArr[size / 2 - 1] + sortedArr[size / 2]) / 2.0;
    } else {
        // If the size is odd, return the middle element
        return sortedArr[size / 2];
    }
}

// Optional Insane Mode: Calculate mode
std::vector<int> calculateMode(const int arr[], int size) {
    std::unordered_map<int, int> frequency;
    int max_frequency = 0;
    std::vector<int> modes;

    // Count frequency of each number
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > max_frequency) {
            max_frequency = frequency[arr[i]];
        }
    }

    // Find all numbers with the maximum frequency
    for (const auto& pair : frequency) {
        if (pair.second == max_frequency) {
            modes.push_back(pair.first);
        }
    }

    return modes;
}

int main() {
    int drinksConsumed[] = {0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 5, 5, 5, 7};
    int size = sizeof(drinksConsumed) / sizeof(drinksConsumed[0]);

    double mean = calculateMean(drinksConsumed, size);
    double median = calculateMedian(drinksConsumed, size);
    // Optional Insane Mode: Calculate mode
    std::vector<int> modes = calculateMode(drinksConsumed, size);

    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Median: " << median << std::endl;
    std::cout << "Modes: ";
    for (int mode : modes) {
        std::cout << mode << " ";
    }
    std::cout << std::endl;

    return 0;
}
