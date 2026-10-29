
#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d scores in descending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target score: ");
    scanf("%d", &target);

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            ans = mid;
            break;
        }
        else if (arr[mid] > target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (ans != -1) {
        printf("Target score found at index: %d\n", ans);
    } else {
        printf("Target score not found. Index: -1\n");
    }

    return 0;
}
