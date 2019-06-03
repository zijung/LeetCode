class Solution {
public:
    // O(logn)
    int search(vector<int> &nums, int target) {
        if (nums.empty()) {
            return -1;
        }

        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + ((high - low) >> 1);

            if (nums[mid] == target) return mid;

            if (nums[low] <= nums[mid]) { // 前半部分有序
                if (nums[mid] > target && nums[low] <= target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else { // 前半部分無序，則後半部分必定有序
                if (nums[mid] < target && nums[high] >= target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};
