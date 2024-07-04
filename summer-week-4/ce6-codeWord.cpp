#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readCodeWord(const string& filename) {
    ifstream inputFile(filename);
    if (inputFile.is_open()) {
        string codeWord;
        getline(inputFile, codeWord);
        if (!codeWord.empty()) {
            cout << "Current code word: " << codeWord << endl;
        } else {
            cout << "No code word found in the file." << endl;
        }
        inputFile.close();
    } else {
        cout << "File not found. This is the first time running the program." << endl;
    }
}

void writeCodeWord(const string& filename, const string& codeWord) {
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile << codeWord;
        outputFile.close();
        cout << "New code word saved successfully." << endl;
    } else {
        cout << "Error opening file for writing." << endl;
    }
}

int main() {
    const string filename = "codeword.txt";

    // Read and display the current code word
    readCodeWord(filename);

    // Ask the user for a new code word
    string newCodeWord;
    cout << "Enter a new code word: ";
    getline(cin, newCodeWord);

    // Write the new code word to the file
    writeCodeWord(filename, newCodeWord);

    return 0;
}
