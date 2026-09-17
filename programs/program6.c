#include <stdio.h>

// Copy an array
void copy_array(float source[], float destination[], int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}

// Bubble Sort
void bubble_sort(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selection_sort(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_idx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        float temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// Insertion Sort
void insertion_sort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Print array
void print_array(float arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Enter number of products: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Number of products must be greater than 0.\n");
        return 0;
    }

    float prices[N];
    float bubble_sorted[N];
    float selection_sorted[N];
    float insertion_sorted[N];

    // Input prices
    for (int i = 0; i < N; i++) {
        printf("Enter price for product %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // Create copies
    copy_array(prices, bubble_sorted, N);
    copy_array(prices, selection_sorted, N);
    copy_array(prices, insertion_sorted, N);

    // Sort copies
    bubble_sort(bubble_sorted, N);
    selection_sort(selection_sorted, N);
    insertion_sort(insertion_sorted, N);

    // Output
    printf("\nOriginal Prices: ");
    print_array(prices, N);

    printf("Sorted using Bubble Sort: ");
    print_array(bubble_sorted, N);

    printf("Sorted using Selection Sort: ");
    print_array(selection_sorted, N);

    printf("Sorted using Insertion Sort: ");
    print_array(insertion_sorted, N);

    return 0;
}
