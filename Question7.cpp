#include <iostream>
#include <vector>

bool isMonotonic(std::vector<int>& nums) {
    bool isIncreasing = true;
    bool isDecreasing = true;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < nums[i - 1]) {
            isIncreasing = false;
        }

        if (nums[i] > nums[i - 1]) {
            isDecreasing = false;
        }

        if (!isIncreasing && !isDecreasing) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3};
    bool isMonotonicArray = isMonotonic(nums);
    std::cout << std::boolalpha << isMonotonicArray << std::endl; // Output: true
    return 0;
}

