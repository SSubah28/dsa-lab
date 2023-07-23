#include <iostream>
using namespace std;

void printCharType(char c);

int main() {
    for (int ch = 0; ch < 256; ch++) {
        printCharType(ch);
    }
    return 0;
}

void printCharType(char c) {
    cout << "The character " << c << " is a ";
    if (isupper(c)) {
        cout << "uppercase char\n";
    } else if (islower(c)) {
        cout << "lowercase char\n";
    } else if (isdigit(c)) {
        cout << "digit\n";
    } else if (isspace(c)) {
        cout << "space\n";
    } else if (iscntrl(c)) {
        cout << "control character\n";
    } else if (ispunct(c)) {
        cout << "punctuation\n";
    } else {
        cout << "undefined\n";
    }
}
