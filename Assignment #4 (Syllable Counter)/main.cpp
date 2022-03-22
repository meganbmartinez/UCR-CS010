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
// Assignment: assn4
//
// I hereby certify that the code in this file
// is ENTIRELY my own original work.
//
// Megan Brittany Martinez
// =================================================================

/* Pseudocode (LearningFuze Style Format)

#include <iomanip> // For the ability to calculate the readability value.
#include "assn.h"  // Import the ability to use is_vowel() function.

using namespace std; // Standard for input and output of console.

Make storage space for determining if word has no vowels. (initial value = true)
Make storage space for index.
Make storage spaces for keeping count of the amount of words, sentences, and syllables.
Make storage space for obtaining input from user.

While to capture each separate word every time
   - For every word it captures, increment wordCount by 1.
   - Reset the no_vowels boolean to assume no vowels exist.
   - Check if last chararacter is a punctuation mark.
         - if last character is a punctuation mark, increment sentence counter by 1.
   - Initialize storage space for a counter to sort through characters. (initial value = 0)
   - While counter is less than or equal to the length of the textInput - 1
         - Check if textInput at i is a vowel
              - If textInput at i is a vowel, increment syllable counter by 1.
              - Set no_vowels boolean to false, as there are vowels in the input.
              - Check if i is not at the final character of textInput
                     - If i is not at the final character of textInput
                            - Check if the character right after i is a vowel
                                   - If character right after i is a vowel, decrement the syllable counter by one,
                                     because it means there are two vowels.
   - Increment i by 1 to traverse through the word.
   - If no_vowels is truthy, increment syllable counter by 1.

Calculate index and assign the result of the expression to index storage space.
Output word count, syllable count, and sentence count.
Set precision for rounding the index up or down.
Output legibility index.
Return 0 to exit the program. */

#include <iostream>
#include <iomanip>
#include "assn.h"

using namespace std;

int main() {

    bool no_vowels = true;
    double index;
    int wordCount = 0, sentenceCount = 0, syllableCount = 0;
    string textInput;


    while (cin >> textInput) {
        wordCount++;

        no_vowels = true;

        if (textInput.at(textInput.size() - 1) == '.' ||
            textInput.at(textInput.size() - 1) == ':' ||
            textInput.at(textInput.size() - 1) == ';' ||
            textInput.at(textInput.size() - 1) == '?' ||
            textInput.at(textInput.size() - 1) == '!') {

            sentenceCount++;
        }

        int i = 0;

        while (i <= textInput.size() - 1) {

            if (is_vowel(textInput.at(i))) {
                syllableCount++;
                no_vowels = false;

                if (i != textInput.size() - 1) {
                    if (is_vowel(textInput.at(i+1))) {
                        syllableCount--;
                    }
                }
            }

            i++;
        }

        if (no_vowels) {
            syllableCount++;
        }
    }

    index = 206.835 - 84.6 * syllableCount / wordCount - 1.105 *
            wordCount / sentenceCount;

    cout << "Words: " << wordCount << endl;
    cout << "Syllables: " << syllableCount << endl;
    cout << "Sentences: " << sentenceCount << endl;

    cout << fixed << setprecision(0);
    cout << "Legibility Index: " << index << endl;

    return 0;
}
