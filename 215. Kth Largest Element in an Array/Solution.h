#include <algorithm>
#include <iostream>
#include <vector>

using std::swap;
using std::vector;

class Solution {
public:
    int findKthLargest(vector<int> &nums, int k) {
        return partition(nums, 0, nums.size() - 1, k);
    }

    int partition(vector<int> &nums, size_t start, size_t end, int k) {
        if (start == end) {
            return nums[start];
        }

        swap(nums[end], nums[start + rand() % (end - start)]);

        int pivot = nums[end];
        size_t i = start;

        for (size_t j = start; j <= end - 1; ++j) {
            if (nums[j] < pivot) {
                std::swap(nums[i], nums[j]);

                ++i;
            }
        }

        std::swap(nums[i], nums[end]);

        size_t largerCount = end - i;
        if (largerCount == k - 1) {
            return pivot;
        } else if (largerCount > (k - 1)) {
            return partition(nums, i + 1, end, k);
        } else {
            return partition(nums, start, i - 1, k - largerCount - 1);
        }
    }
};
