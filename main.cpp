#include <iostream>
#include <fstream>
#include <string>

// Function to replace a specific letter in the ciphertext with a specific replacement letter
std::string replaceLetter(std::string ciphertext, char letter, char replacement) {
    for (int pos = 0; pos < ciphertext.length(); ++pos) {
        if (ciphertext[pos] == letter) {
            ciphertext[pos] = replacement;
        }
    }
    return ciphertext;
}

int main() {
    std::ifstream infile("input.txt"); // Open input file
    std::ofstream outfile("output.txt"); // Open output file

    if (!infile || !outfile) {
        std::cerr << "Error: Unable to open file!" << std::endl;
        return 1;
    }

    std::string ciphertext;
    std::getline(infile, ciphertext); // Read entire line from input file

    char letter = 'Y';
    char replacement = 'f';

    std::string plaintext = replaceLetter(ciphertext, letter, replacement);

    outfile << plaintext << std::endl; // Write plaintext to output file

    return 0;
}
