#include <iostream>
#include <vector>

using namespace std;

bool checkRotatedSorted(vector<int>& nums) {
    int countDecrease = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            countDecrease++;
        }
        if (countDecrease > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2}; // True
    cout << (checkRotatedSorted(nums) ? "True" : "False") << endl;

    vector<int> nums2 = {2, 1, 3, 4}; // False
    cout << (checkRotatedSorted(nums2) ? "True" : "False") << endl;

    return 0;
}
