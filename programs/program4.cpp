#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string code;
    int is_valid = 1;

    cout << "Enter book code: ";
    cin >> code;

    if (code.length() != 12) {
        is_valid = 0;
    }
    else {
        for (int i = 0; i < 3; i++) {
            if (!isalpha(code[i]) || !isupper(code[i])) {
                is_valid = 0;
            }
        }

        // Check first dash
        if (code[3] != '-') {
            is_valid = 0;
        }


        for (int i = 4; i < 8; i++) {
            if (!isdigit(code[i])) {
                is_valid = 0;
            }
        }

        if (code[8] != '-') {
            is_valid = 0;
        }

        for (int i = 9; i < 12; i++) {
            if (!isdigit(code[i])) {
                is_valid = 0;
            }
        }
    }

    if (is_valid) {
        cout << "'" << code << "' is a valid book code." << endl;
    }
    else {
        cout << "'" << code << "' is an invalid book code." << endl;
    }

    return 0;
}
