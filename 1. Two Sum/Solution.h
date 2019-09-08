#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 用一個 map，存儲每個元素的 index
        unordered_map<int, int> nums_map;
        for (vector<int>::const_iterator iter = nums.cbegin(); iter != nums.cend(); ++iter) {
            int index = iter - nums.cbegin();

            // 算出當前數字應該加多少，並從 map 中查找這個數，如果找到了，直接反回俩數的 index
            int another = target - *iter;
            if (nums_map.find(another) != nums_map.end()) {
                return {nums_map[another], index};
            }

            nums_map[*iter] = index;
        }

        return {};
    }
};
