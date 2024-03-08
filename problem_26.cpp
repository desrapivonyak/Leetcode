#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    size_t k {nums.size()};
    return k;
}