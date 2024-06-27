#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(nullptr));

    // Get the user's name
    std::string name;
    std::cout << "What is your name, fortune seeker? ";
    std::getline(std::cin, name);

    // Ask an additional question to determine worthiness
    std::string snack;
    std::cout << "What is your favorite Hostess snack cake? ";
    std::getline(std::cin, snack);

    // Generate a random number between 0 and 99
    int randomNumber = std::rand() % 100;

    // Apply a modifier based on the snack cake answer
    int modifier = 0;
    if (snack == "Twinkie") {
        modifier = 10;
    } else if (snack == "HoHo") {
        modifier = 5;
    } else if (snack == "CupCake") {
        modifier = 20;
    }
    // Add the modifier to the random number
    randomNumber += modifier;

    // Ensure the random number does not exceed 99
    if (randomNumber > 99) {
        randomNumber = 99;
    }

    // Display a fortune based on the modified random number
    if (randomNumber <= 40) {
        std::cout << "I see dark days ahead for you, " << name << ". Beware the anger of a gentle man." << std::endl;
    } else if (randomNumber <= 60) {
        std::cout << name << ", great fortune is coming your way. Stay true to your path." << std::endl;
    } else if (randomNumber <= 80) {
        std::cout << "An unexpected opportunity will soon present itself to you, " << name << "." << std::endl;
    } else if (randomNumber <= 94) {
        std::cout << "Be cautious, " << name << ". A close friend may not be as trustworthy as you think." << std::endl;
    } else {
        std::cout << "Happiness is in your future, " << name << ". Embrace the joy that comes your way." << std::endl;
    }

    return 0;
}
