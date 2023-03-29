# frequency-of-each-letter

# Frequency.cpp

This C++ file contains a program that counts the frequency of each letter in a given text file and writes the results to an output file. The program is useful for solving substitution ciphers.

# How to Use
1. Create an input file named inputfrequency.txt in the same directory as Frequency.cpp.
2. Write or paste the text you want to analyze into the input file.
3. Compile and run Frequency.cpp.
4. The program will create an output file named outputfrequency.txt with the frequency of each letter in the input text.

# Functions

CountLetterFrequency
Counts the frequency of each letter in a given string and updates the counts in a map.



# Parameters
text : std::string - The string to analyze.
letterCounts : std::map<char, int>& - A reference to a map to store the frequency of each letter.
totalLetters : int& - A reference to a variable to store the total number of letters in the string.


PrintLetterFrequency
Prints the frequency of each letter in a given map and writes the results to an output file.

# Parameters
letterCounts : std::map<char, int> - The map containing the frequency of each letter.
totalLetters : int - The total number of letters in the string.
# Example Output

a: 10.41% 
b: 0.00% 
c: 4.53%
d: 4.18%
e: 13.98%  
f: 0.13%  
g: 0.45%  
h: 1.88%  
i: 8.63%  
j: 0.00%  
k: 0.33%  
l: 5.44%  
m: 2.68%  
n: 8.31%  
o: 9.29%  
p: 0.00%  
q: 0.00%  
r: 7.05%  
s: 6.20%  
t: 7.49%  
u: 3.54%  
v: 0.96%  
w: 2.63%  
x: 0.00%  
y: 2.17%  
z: 0.00%  
Total is: 100%








_________________________________________________________________________________________________________________________________

# Substitution Cipher Solver
This program reads in a ciphertext from an input file, replaces a specific letter with a replacement letter, and writes the resulting plaintext to an output file.

# How to use
Create an input file with the ciphertext to be solved. The file should be named input.txt.

Open the main.cpp file and locate the replaceLetter function. Specify the letter to be replaced and the replacement letter by modifying the letter and replacement variables.

Compile and run the program.

The resulting plaintext will be written to an output file named output.txt.

# Code Description
replaceLetter function
This function takes a string of ciphertext, a letter to replace, and a replacement letter, and replaces all occurrences of the original letter with the replacement letter. The resulting plaintext string is returned.

#  function
The main function reads in the ciphertext from an input file, uses the replaceLetter function to replace the specified letter, and writes the resulting plaintext to an output file.

If the input or output file fails to open, the program outputs an error message to the console and exits with an error code of 1.

# Dependencies
This program does not depend on any external libraries. It only uses standard C++ libraries: iostream, fstream, and string.

# Limitations
This program is designed to solve a substitution cipher where only one letter is replaced with another. It cannot solve more complex substitution ciphers.




















