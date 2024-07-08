#include <iostream>
#include <fstream>
#include <string>

// Main function
int main() {
    const std::string FILENAME = "codeword.txt";
    std::string codeword;

    // Step 1: Read codeword from file
    std::ifstream inFile(FILENAME);
    if (inFile.is_open()) {
        std::getline(inFile, codeword);
        std::cout << "Current codeword: " << codeword << std::endl;
        inFile.close();
    } else {
        std::cout << "No existing codeword file found." << std::endl;
    }

    // Step 2: Ask user for new codeword
    std::cout << "Enter a new codeword: ";
    std::getline(std::cin, codeword);

    // Step 3: Save new codeword to file
    std::ofstream outFile(FILENAME);
    if (outFile.is_open()) {
        outFile << codeword;
        outFile.close();
        std::cout << "New codeword saved successfully." << std::endl;
    } else {
        std::cout << "Unable to save the new codeword." << std::endl;
    }

    return 0;
}
