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
// Assignment: assn5
//
// I hereby certify that the code in this file
// is ENTIRELY my own original work.
//
// Megan Brittany Martinez
// =================================================================

/* Pseudocode (LearningFuze Style Format)

Include input output library.
Include random library for random numbers.
Include setprecision library.

Use standard for input and output of console.

Seed the random function with a value of 1000.

Make storage space to keep track of random number generated from each roll.
Make stoage space to keep track of score for each simulation. (initial value = 0)
Make storage spaces to keep count of each score value. (initial value = 0)
Make storage space to keep track of number of times to simulate.

Prompt user for input for how many times to simulate.
Store input into times to simulate counter.
Output two newlines for formatting.

For loops inputted times
   - Reset roll to 0 after each loop.
   - Reset score to 0.
   - While score is less than 20 and roll is not a 1
         - Assign random number into roll.
         - Check if roll is equal to 1.
               - If roll is equal to 1, reset score to 0.
               - Otherwise, if roll is not equal to 1, the sum of current score and roll will be assigned to storage space score.

Determine what the final score of each round is and increment by 1 to each category.
Output all the values and probablities in a formatted table.
Return 0 to exit the program. */

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {

    srand( 1000 );

    int roll;
    int score = 0;
    int score20 = 0, score21 = 0, score22 = 0, score23 = 0, score24 = 0;
    int score25 = 0, score0 = 0;
    int timesToSimulate;

    cout << "Hold-at-20 turn simulations? ";
    cin >> timesToSimulate;
    cout << endl << endl;

    for (int i = 0; i < timesToSimulate; i++) {

        roll = 0;
        score = 0;

        while (score < 20 && roll != 1) {
            roll = rand() % 6 + 1;

            if (roll == 1) {
                score = 0;
            } else {
                score = score + roll;
            }
        }

        if (score == 20) {
            score20++;
        } else if (score == 21) {
            score21++;
        } else if (score == 22) {
            score22++;
        } else if (score == 23) {
            score23++;
        } else if (score == 24) {
            score24++;
        } else if (score == 25) {
            score25++;
        } else if (score == 0)  {
            score0++;
        }
    }

    cout << fixed << setprecision(6);
    cout << "Score\t" << "Estimated Probability" << endl;

    cout << "0\t"  << static_cast<double>(score0)  / timesToSimulate << endl;
    cout << "20\t" << static_cast<double>(score20) / timesToSimulate << endl;
    cout << "21\t" << static_cast<double>(score21) / timesToSimulate << endl;
    cout << "22\t" << static_cast<double>(score22) / timesToSimulate << endl;
    cout << "23\t" << static_cast<double>(score23) / timesToSimulate << endl;
    cout << "24\t" << static_cast<double>(score24) / timesToSimulate << endl;
    cout << "25\t" << static_cast<double>(score25) / timesToSimulate << endl;

    return 0;
}
