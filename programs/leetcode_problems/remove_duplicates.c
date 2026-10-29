#include <stdio.h>

int main() {
    int nums[] = {1, 1, 2, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int unique[100];
    int count = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < count; j++) {
            if (nums[i] == unique[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            unique[count] = nums[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }

    printf("\nNumber of unique elements: %d\n", count);

    return 0;
}