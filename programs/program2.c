#include <stdio.h>

int main() {
    int N;

    printf("Enter number of hours: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Number of hours must be greater than 0.\n");
    }
    else {
        int patients[N];

        // Input patients for each hour
        for (int i = 0; i < N; i++) {
            printf("Enter patients in hour %d: ", i + 1);
            scanf("%d", &patients[i]);
        }

        // Find maximum patients and hour
        int max_patients = patients[0];
        int max_hour = 0;

        for (int i = 1; i < N; i++) {
            if (patients[i] > max_patients) {
                max_patients = patients[i];
                max_hour = i;
            }
        }

        // Find minimum patients
        int min_patients = patients[0];

        for (int i = 1; i < N; i++) {
            if (patients[i] < min_patients) {
                min_patients = patients[i];
            }
        }

        // Peak hour
        int peak_hour = max_hour;

        // Calculate average
        int sum = 0;

        for (int i = 0; i < N; i++) {
            sum += patients[i];
        }

        float average = (float)sum / N;

        // Count hours above average
        int above_average_hours = 0;

        for (int i = 0; i < N; i++) {
            if (patients[i] > average) {
                above_average_hours++;
            }
        }

        // Output
        printf("Maximum number of patients: %d (Hour %d)\n",
               max_patients, max_hour + 1);

        printf("Minimum number of patients: %d\n",
               min_patients);

        printf("Peak hour: Hour %d\n",
               peak_hour + 1);

        printf("Number of hours above average: %d\n",
               above_average_hours);
    }

    return 0;
}