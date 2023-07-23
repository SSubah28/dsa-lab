#include <iostream>
using namespace std;

int get_age() {
    int age;
    while(1) {
        cout << "Enter your age: ";
        cin >> age;
        if (age < 0) {
        cout << "\aYou aren't born yet.\n";
        } else if (age > 120) {
            cout << "\aYou're too old to be alive.\n";
        } else {
            return age;
        }
    }
    cout << " Try again.\n";
}


int main() {
    int a = get_age();
    cout << "You're " << a << " years old.\n";
    return 0;
}
