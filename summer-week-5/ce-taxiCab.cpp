// CE8 - Taxicab Assignment
// Author: Austin Spraggins
// Student ID: 0524626

#include <iostream>
// Add <iomanip> for std::setprecision and std::setw
#include <iomanip>


class Taxicab {
private:
    int xPosition = 0;
    int yPosition = 0;
    int odometer = 0;

public:
    void moveUp(int distance);
    void moveDown(int distance);
    void moveLeft(int distance);
    void moveRight(int distance);
    void display() const; // Added const to display() to prevent modification of odometer
};

// Move the cab forward
void Taxicab::moveUp(int distance) {
  // Added error handling for negative distances
    if (distance < 0) {
        std::cerr << "Error: Distance cannot be negative. Movement ignored." << std::endl;
        return;
    }
    yPosition += distance;
    odometer += distance;
}

// Move the cab backward
void Taxicab::moveDown(int distance) {
  // Added error handling for negative distances
    if (distance < 0) {
        std::cerr << "Error: Distance cannot be negative. Movement ignored." << std::endl;
        return;
    }
    yPosition -= distance;
    odometer += distance;
}

// Move the cab to the left
void Taxicab::moveLeft(int distance) {
  // Added error handling for negative distances
    if (distance < 0) {
        std::cerr << "Error: Distance cannot be negative. Movement ignored." << std::endl;
        return;
    }
    xPosition -= distance;
    odometer += distance;
}

// Move the cab to the right
void Taxicab::moveRight(int distance) {
  // Added error handling for negative distances
    if (distance < 0) {
        std::cerr << "Error: Distance cannot be negative. Movement ignored." << std::endl;
        return;
    }
    xPosition += distance;
    odometer += distance;
}

// Display the current position of the cab
void Taxicab::display() const {
    std::cout << std::fixed << std::setprecision(2);  // Set floating-point precision
    std::cout << "+-----------------------------------+" << std::endl;
    std::cout << "|         Taxicab Status            |" << std::endl;
    std::cout << "+-----------------------------------+" << std::endl;
    std::cout << "| Current Position: (" << std::setw(5) << xPosition << ", " << std::setw(5) << yPosition << ") |" << std::endl;
    std::cout << "| Odometer Reading: " << std::setw(10) << odometer << " units |" << std::endl;
    std::cout << "+-----------------------------------+" << std::endl;

    if (odometer < 0) {
        std::cerr << "Warning: Odometer has a negative value. This shouldn't happen." << std::endl;
    }
}

int main() {
    Taxicab cab;
    cab.moveUp(5);
    cab.moveDown(2);
    cab.moveLeft(3);
    cab.moveRight(4);
    cab.display();
    return 0;
}