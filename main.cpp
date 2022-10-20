#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; // pls no bully

int main() {

    int i = 0; // loop var

    int cringe; // actual passcode variable
    int based; // number of passcodes generated
    int lvl; // (4 or 6) length of passcode

    srand((unsigned)time(NULL)); // randomizer

    cout << "PGEN - some basic passcode generator" << endl;
    cout << "version 1.0.0" << endl;
    cout << "by DDX (c) 2022" << endl;
    cout << "" << endl;

    cout << "Why would you use a program like this, you may ask?" << endl;
    cout << "This program is useful to generate passcodes when" << endl;
    cout << "you can't think of one yourself, or if someone manages" << endl;
    cout << "to guess YOUR passcode and you need a way to retaliate..." << endl;
    cout << "" << endl;

    cout << "Enter number of desired passcodes:" << endl;
    cin >> based;

    cout << "Enter length of desired passcodes (4- or 6-digit only):" << endl;
    cin >> lvl;
    
    while (lvl != 4 && lvl != 6) { 
        cout << "" << endl;
        cout << "ERROR 1 - only 4 or 6 digits are allowed." << endl;
        cout << "" << endl;
        cout << "Enter length of desired passcodes:" << endl;
        cin >> lvl;
    }

    if (lvl == 6) {
        cout << "" << endl;
        cout << "Generating..." << endl;
        cout << "" << endl;
    do {
        cringe = rand();
        if (cringe > 0 && cringe < 1000000) {
            if (cringe >= 10000 && cringe < 100000) {
                cout << "NEW 6-DIGIT PASSCODE - 0" << cringe << endl;
            }
            else if (cringe >= 1000 && cringe < 10000) {
                cout << "NEW 6-DIGIT PASSCODE - 00" << cringe << endl;
            }
            else if (cringe >= 100 && cringe < 1000) {
                cout << "NEW 6-DIGIT PASSCODE - 000" << cringe << endl;
            }
            else if (cringe >= 10 && cringe < 100) {
                cout << "NEW 6-DIGIT PASSCODE - 0000" << cringe << endl;
            }
            else if (cringe > 0 && cringe < 10) {
                cout << "NEW 6-DIGIT PASSCODE - 00000" << cringe << endl;
            }
            else if (cringe == 123456) { // one in 999,999 probability of this ever happening
                cout << "A WINNER IS YOU !" << endl;
            }
            else {
                cout << "NEW 6-DIGIT PASSCODE - " << cringe << endl;
            }
            i++;
        }
    } while (i < based);
    }

    else if (lvl == 4) {
        cout << "" << endl;
        cout << "Generating..." << endl;
        cout << "" << endl;
    do {
        cringe = rand();
        if (cringe > 0 && cringe < 10000) {
            if (cringe >= 100 && cringe < 1000) {
                cout << "NEW 4-DIGIT PASSCODE - 0" << cringe << endl;
            }
            else if (cringe >= 10 && cringe < 100) {
                cout << "NEW 4-DIGIT PASSCODE - 00" << cringe << endl;
            }
            else if (cringe >= 1 && cringe < 10) {
                cout << "NEW 4-DIGIT PASSCODE - 000" << cringe << endl;
            }
            else {
                cout << "NEW 4-DIGIT PASSCODE - " << cringe << endl;
            }
            i++;
        }
    } while (i < based);
}

    cout << "" << endl;
    cout << "Proudly Written In C++ (out of boredom)" << endl;
    cout << "" << endl;

    return 0;
}