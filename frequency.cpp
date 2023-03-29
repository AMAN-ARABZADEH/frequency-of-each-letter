#include <iostream>
#include <fstream>
#include <string>
#include <map>

void CountLetterFrequency(std::string text, std::map<char, int>& letterCounts, int& totalLetters) {
    // Iterate through each character in the text and count the frequency of each letter
    for (char c : text) {
        if (isalpha(c)) {  // Check if the character is a letter
            letterCounts[tolower(c)]++;  // Increment the count of the corresponding letter
            totalLetters++;  // Increment the total number of letters
        }
    }
}

// Print the frequency of each letter and Write the letter and its frequency to the file
void PrintLetterFrequency(std::map<char, int> letterCounts, int totalLetters) {
    std::ofstream outputFile("outputfrequency.txt"); // Open the output file
    double total = 0;

    // Print the frequency of each letter
    for (const auto& pair : letterCounts) {  // Iterate through the letter-count pairs in the map
        char letter = pair.first;
        int count = pair.second;
        double frequency = (double) count / totalLetters * 100;  // Calculate the frequency of the current letter
        total+=frequency;
        std::cout << letter << ": " << frequency << "%" << std::endl;  // Print the letter and its frequency
        outputFile << letter << ": " << frequency << "%" << std::endl;  // Write the letter and its frequency to the file
    }
    outputFile << "Total is: " << total << std::endl;
    outputFile.close(); // Close the output file
}

int main() {
    std::ifstream inputFile("inputfrequency.txt"); // Open the input file
    std::string text;
    std::map<char, int> letterCounts; // Initialize a map to hold the count of each letter
    int totalLetters = 0; // Initialize a variable to hold the total number of letters in the text

    if (inputFile.is_open()) { // Check if the input file was opened successfully
        while (getline(inputFile, text)) { // Read each line of text from the input file
            CountLetterFrequency(text, letterCounts, totalLetters); // Count the frequencies for the current line of text
        }
        inputFile.close(); // Close the input file

        PrintLetterFrequency(letterCounts, totalLetters); // Print the letter frequency results
    } else {
        std::cerr << "Unable to open input file" << std::endl;
        return 1;
    }

    return 0;
}
