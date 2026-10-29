
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {4, 2, 4, 1, 2, 5, 1};
    unordered_set<int> seen;

    int k = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (seen.insert(nums[i]).second) {
            nums[k] = nums[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}
