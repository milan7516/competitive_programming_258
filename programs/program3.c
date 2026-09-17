#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;

    printf("Enter number of students: ");
    scanf("%d", &N);
    getchar();  // Remove newline left by scanf

    if (N <= 0) {
        printf("Number of students must be greater than 0.\n");
        return 0;
    }

    char names[N][100];

    // Input student names
    for (int i = 0; i < N; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        // Remove newline
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    char search_name[100];

    printf("Enter name to search: ");
    fgets(search_name, sizeof(search_name), stdin);

    // Remove newline
    search_name[strcspn(search_name, "\n")] = '\0';

    // Case-sensitive search
    int case_sensitive_found = 0;
    int case_sensitive_pos = -1;

    for (int i = 0; i < N; i++) {
        if (strcmp(names[i], search_name) == 0) {
            case_sensitive_found = 1;
            case_sensitive_pos = i + 1;
            break;
        }
    }

    // Case-insensitive search
    int case_insensitive_found = 0;
    int case_insensitive_pos = -1;

    for (int i = 0; i < N; i++) {

        int same = 1;

        int len1 = strlen(names[i]);
        int len2 = strlen(search_name);

        if (len1 != len2) {
            same = 0;
        }
        else {
            for (int j = 0; j < len1; j++) {
                if (tolower(names[i][j]) != tolower(search_name[j])) {
                    same = 0;
                    break;
                }
            }
        }

        if (same) {
            case_insensitive_found = 1;
            case_insensitive_pos = i + 1;
            break;
        }
    }

    // Output
    printf("\nCase-Sensitive Search:\n");

    if (case_sensitive_found) {
        printf("Student '%s' found at position %d.\n",
               search_name, case_sensitive_pos);
    }
    else {
        printf("Student '%s' not found.\n", search_name);
    }

    printf("\nCase-Insensitive Search:\n");

    if (case_insensitive_found) {
        printf("Student '%s' found at position %d.\n",
               search_name, case_insensitive_pos);
    }
    else {
        printf("Student '%s' not found.\n", search_name);
    }

    return 0;
}