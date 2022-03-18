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
// Assignment: assn2
//
// I hereby certify that the code in this file
// is ENTIRELY my own original work.
//
// Megan Brittany Martinez
// =================================================================

#include <iostream>

using namespace std;       // standard for input and output of console

int main() {        // main function with return type int

    string woman, man;
    string adj1, adj2, adj3;
    string noun1, noun2, noun3;
    string verb1, verb2;
    string greeting;

    cout << "Name of Woman: ";
    cin >> woman;

    cout << "Name of Man: ";
    cin >> man;

    cout << "Adjective #1: ";
    cin >> adj1;

    cout << "Adjective #2: ";
    cin >> adj2;

    cout << "Adjective #3: ";
    cin >> adj3;

    cout << "Noun #1: ";
    cin >> noun1;

    cout << "Noun #2: ";
    cin >> noun2;

    cout << "Noun #3: ";
    cin >> noun3;

    cout << "Verb #1: ";
    cin >> verb1;

    cout << "Verb #2: ";
    cin >> verb2;

    cout << "Greeting Word: ";
    cin >> greeting;

    cout << endl;

    cout << "One day, " << man << " went to the park "
         << "to have tea and a sandwich. It was a \n" << adj1 << " day. "
         << man << " was feeing kind of " << adj2 << ". "
         << "Across the park was \n" << woman << " who was playing with a "
         << noun1 << "." << endl << endl;

    cout << "An old person walked up to " << man << " and told him "
         << greeting << ". The old man then \nproceeded to "
         << verb1 << " at the kids in the park. The kids reacted "
         << verb2 << " \nand ran towards the nearest " << noun2 << "." << endl
         << endl;

    cout << "After a few hours, " << man << " decided to go to " << woman
         << ". " << man << " really \nlikes " << woman << " so " << man
         << " decided to give " << woman << " some " << noun3 << ". "
         << "In \nthe end, they lived " << adj3 << " ever after." << endl
         << endl;

    return 0;   // returns 0 to terminate program
}
