#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter number of students: ";
    cin >> N;

    if (N <= 0) {
        cout << "Number of students must be greater than 0.";
        return 0;
    }

    float attendance[100];

    for (int i = 0; i < N; i++) {
        cout << "Enter attendance for student " << i + 1 << ": ";
        cin >> attendance[i];

        if (attendance[i] < 0 || attendance[i] > 100) {
            cout << "Attendance must be between 0 and 100.";
            return 0;
        }
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        if (attendance[i] < 65) {
            count++;
        }
    }

    float lowest = attendance[0];
    int position = 0;

    for (int i = 1; i < N; i++) {
        if (attendance[i] < lowest) {
            lowest = attendance[i];
            position = i;
        }
    }

    float sum = 0;

    for (int i = 0; i < N; i++) {
        sum += attendance[i];
    }

    float average = sum / N;

    cout << "\nStudents below 65%: " << count << endl;
    cout << "Lowest attendance: " << lowest
         << "% (Student " << position + 1 << ")" << endl;
    cout << "Average attendance: " << average << "%" << endl;

    return 0;
}