#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char code[100];
    int is_valid = 1;

    printf("Enter book code: ");
    scanf("%s", code);

    // Check length
    if (strlen(code) != 12) {
        is_valid = 0;
    }
    else {
        // Check first 3 characters: uppercase alphabets
        for (int i = 0; i < 3; i++) {
            if (!isalpha(code[i]) || !isupper(code[i])) {
                is_valid = 0;
            }
        }

        // Check first dash
        if (code[3] != '-') {
            is_valid = 0;
        }

        // Check characters 4 to 7: digits
        for (int i = 4; i < 8; i++) {
            if (!isdigit(code[i])) {
                is_valid = 0;
            }
        }

        // Check second dash
        if (code[8] != '-') {
            is_valid = 0;
        }

        // Check characters 9 to 11: digits
        for (int i = 9; i < 12; i++) {
            if (!isdigit(code[i])) {
                is_valid = 0;
            }
        }
    }

    if (is_valid) {
        printf("'%s' is a valid book code.\n", code);
    }
    else {
        printf("'%s' is an invalid book code.\n", code);
    }

    return 0;
}