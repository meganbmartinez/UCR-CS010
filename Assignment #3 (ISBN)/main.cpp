// =================================================================
// Course: CS 10 Fall 2013
//
// First Name: Megan
// Last Name: Martinez
// Course Username: mmart085
// Email Address: mmart085@ucr.edu
// Lecture Section: 001
// Lab Section: 029
// TA: Malcolm Mumme
//
// Assignment: assn3
//
// I hereby certify that the code in this file
// is ENTIRELY my own original work.
//
// Megan Brittany Martinez
// =================================================================

/* Pseudocode (LearningFuze Style Format)

Make storage space for ISBN input, weighted sum (initial value = 0), and check sum (initial value = 0)
Ask user for input.
Output a newline.
For each digit of ISBN.
  - Pick right most number and times by algorith and add weighted sum.
  - (weightedSum algorithm)
  - Store the input without the right-most number for the next loop.
Calculate checkSum from weightedSum and assign the result of the modulo expression to checkSum
Output checkSum with a newline for format purposes.
End program by returning zero. */

#include <iostream>

using namespace std;

int main() {

    int ISBNinput;
    int weightedSum = 0;
    int checksum = 0;

    // cout << "Enter first 9 digits of ISBN: ";

    cin >> ISBNinput;
    cout << endl;

    for (int i = 9; i > 0; i--) {
        weightedSum = (ISBNinput % 10) * i + weightedSum;
        ISBNinput = ISBNinput / 10;
    }

    checksum = weightedSum % 11;

    cout << checksum << endl;

    return 0;
}
