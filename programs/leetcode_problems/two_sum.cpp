#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n, target;

    cout << "Enter the number of product prices: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter " << n << " distinct product prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << "Enter the target gift-card balance: ";
    cin >> target;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int complement = target - prices[i];

        if (mp.find(complement) != mp.end()) {
            cout << "Indices: [" << mp[complement] << ", " << i << "]" << endl;
            return 0;
        }

        mp[prices[i]] = i;
    }

    return 0;
}
