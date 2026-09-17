#include <stdio.h>

int main() {
    int N;

    printf("Enter number of products: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Number of products must be greater than 0.\n");
    }
    else {
        float prices[N];

        // Input prices
        for (int i = 0; i < N; i++) {
            printf("Enter price for product %d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        // Sort prices in ascending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (prices[j] > prices[j + 1]) {
                    float temp = prices[j];
                    prices[j] = prices[j + 1];
                    prices[j + 1] = temp;
                }
            }
        }

        // Display sorted prices
        printf("\nPrices in ascending order:\n");

        for (int i = 0; i < N; i++) {
            printf("%.2f\n", prices[i]);
        }
    }

    return 0;
}