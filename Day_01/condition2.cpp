#include <iostream>
using namespace std;

int main() {
    char input;
    
    cout << "Enter a character: ";
    cin >> input;

    if (input >= 'a' && input <= 'z') {
        cout << "Lowercase letter" << endl;
    } else if (input >= 'A' && input <= 'Z') {
        cout << "Uppercase letter" << endl;
    } else if (input >= '0' && input <= '9') {
        cout << "Numeric digit" << endl;
    } else {
        cout << "Other character" << endl;
    }

    return 0;
}
