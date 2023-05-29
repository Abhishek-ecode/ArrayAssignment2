#include <iostream>
#include <vector>

bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();
    for (int i = 0; i < size; ++i) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {
            ++count;
            flowerbed[i] = 1;
            ++i;  // Skip the next plot since it cannot be planted
        }
    }
    return count >= n;
}

int main() {
    std::vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    bool canPlant = canPlaceFlowers(flowerbed, n);
    std::cout << std::boolalpha << canPlant << std::endl; // Output: true
    return 0;
}
