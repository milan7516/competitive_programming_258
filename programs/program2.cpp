#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter number of hours: ";
    cin >> N;

    if (N <= 0) {
        cout << "Number of hours must be greater than 0." << endl;
    }
    else {
        int patients[100];

        for (int i = 0; i < N; i++) {
            cout << "Enter patients in hour " << i + 1 << ": ";
            cin >> patients[i];
        }

        int max_patients = patients[0];
        int max_hour = 0;

        for (int i = 1; i < N; i++) {
            if (patients[i] > max_patients) {
                max_patients = patients[i];
                max_hour = i;
            }
        }

        int min_patients = patients[0];

        for (int i = 1; i < N; i++) {
            if (patients[i] < min_patients) {
                min_patients = patients[i];
            }
        }

        int peak_hour = max_hour;

        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum += patients[i];
        }

        float average = (float)sum / N;
        int above_average_hours = 0;

        for (int i = 0; i < N; i++) {
            if (patients[i] > average) {
                above_average_hours++;
            }
        }

        cout << "Maximum number of patients: "
             << max_patients << " (Hour " << max_hour + 1 << ")" << endl;

        cout << "Minimum number of patients: "
             << min_patients << endl;

        cout << "Peak hour: Hour "
             << peak_hour + 1 << endl;

        cout << "Number of hours above average: "
             << above_average_hours << endl;
    }

    return 0;
}