#include <iostream>
#include <vector>
#include <algorithm>

int minimumScore(std::vector<int>& nums, int k) {
    int minimum = *std::min_element(nums.begin(), nums.end());
    int maximum = *std::max_element(nums.begin(), nums.end());

    if (minimum == maximum) {
        return 0;
    }

    for (int num : nums) {
        if (num - k < minimum) {
            minimum = num - k;
        }

        if (num + k > maximum) {
            maximum = num + k;
        }
    }

    return maximum - minimum;
}

int main() {
    std::vector<int> nums = {1};
    int k = 0;
    int minimum = minimumScore(nums, k);
    std::cout << minimum << std::endl; // Output: 0
    return 0;
}

