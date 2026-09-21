#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter number of products: ";
    cin >> N;

    if (N <= 0) {
        cout << "Number of products must be greater than 0." << endl;
    }
    else {
        float prices[100];

        for (int i = 0; i < N; i++) {
            cout << "Enter price for product " << i + 1 << ": ";
            cin >> prices[i];
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (prices[j] > prices[j + 1]) {
                    float temp = prices[j];
                    prices[j] = prices[j + 1];
                    prices[j + 1] = temp;
                }
            }
        }

        cout << "\nPrices in ascending order:" << endl;

        for (int i = 0; i < N; i++) {
            cout << prices[i] << endl;
        }
    }

    return 0;
}