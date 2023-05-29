#include <iostream>
#include <vector>
#include <unordered_map>

int findLHS(std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;
    for (int num : nums) {
        countMap[num]++;
    }
    int maxLen = 0;
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        int num = it->first;
        int count = it->second;
        if (countMap.count(num + 1)) {
            maxLen = std::max(maxLen, count + countMap[num + 1]);
        }
    }
    return maxLen;
}

int main() {
    std::vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int maxLen = findLHS(nums);
    std::cout << maxLen << std::endl; // Output: 5
    return 0;
}

