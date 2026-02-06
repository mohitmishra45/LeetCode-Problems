class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;

        while (i < nums.size()) {
            if (nums[i] != i + 1) {
                int correctIndex = nums[i] - 1;

                if (nums[i] == nums[correctIndex]) {
                    return nums[i];  // duplicate found
                }

                swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }

        return -1;
    }
};