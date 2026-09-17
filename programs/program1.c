#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Enter number of students: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Number of students must be greater than 0.\n");
        return 0;
    }

    float attendance[N];

    // Input attendance
    for (int i = 0; i < N; i++) {
        printf("Enter attendance for student %d: ", i + 1);
        scanf("%f", &attendance[i]);
    }

    float threshold = 65.0;

    // Validate attendance
    for (int i = 0; i < N; i++) {
        if (attendance[i] < 0 || attendance[i] > 100) {
            printf("Attendance must be between 0 and 100.\n");
            return 0;
        }
    }

    // Count students below threshold
    int low_attendance_students = 0;

    for (int i = 0; i < N; i++) {
        if (attendance[i] < threshold) {
            low_attendance_students++;
        }
    }

    // Find lowest attendance
    float lowest_attendance = attendance[0];
    int lowest_position = 0;

    for (int i = 1; i < N; i++) {
        if (attendance[i] < lowest_attendance) {
            lowest_attendance = attendance[i];
            lowest_position = i;
        }
    }

    // Calculate average
    float sum = 0;

    for (int i = 0; i < N; i++) {
        sum += attendance[i];
    }

    float average = sum / N;

    // Output
    printf("Number of students with attendance below %.1f%%: %d\n",
           threshold, low_attendance_students);

    printf("Lowest attendance: %.2f%% (Student %d)\n",
           lowest_attendance, lowest_position + 1);

    printf("Average attendance: %.2f%%\n", average);

    return 0;
}