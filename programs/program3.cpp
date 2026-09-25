#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int N;

    cout << "Enter number of students: ";
    cin >> N;
    cin.ignore();  

    if (N <= 0) {
        cout << "Number of students must be greater than 0." << endl;
        return 0;
    }

    string names[100];

    for (int i = 0; i < N; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    string search_name;

    cout << "Enter name to search: ";
    getline(cin, search_name);

    int case_sensitive_found = 0;
    int case_sensitive_pos = -1;

    for (int i = 0; i < N; i++) {
        if (names[i] == search_name) {
            case_sensitive_found = 1;
            case_sensitive_pos = i + 1;
            break;
        }
    }

    int case_insensitive_found = 0;
    int case_insensitive_pos = -1;

    for (int i = 0; i < N; i++) {
        string name1 = names[i];
        string name2 = search_name;

        for (int j = 0; j < name1.length(); j++) {
            name1[j] = tolower(name1[j]);
        }

        for (int j = 0; j < name2.length(); j++) {
            name2[j] = tolower(name2[j]);
        }

        if (name1 == name2) {
            case_insensitive_found = 1;
            case_insensitive_pos = i + 1;
            break;
        }
    }

    cout << "\nCase-Sensitive Search:" << endl;

    if (case_sensitive_found) {
        cout << "Student '" << search_name
             << "' found at position "
             << case_sensitive_pos << "." << endl;
    }
    else {
        cout << "Student '" << search_name
             << "' not found." << endl;
    }

    cout << "\nCase-Insensitive Search:" << endl;

    if (case_insensitive_found) {
        cout << "Student '" << search_name
             << "' found at position "
             << case_insensitive_pos << "." << endl;
    }
    else {
        cout << "Student '" << search_name
             << "' not found." << endl;
    }

    return 0;
}
