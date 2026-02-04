class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0; //Tracking of non-zero
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]!=0)
            {
                swap(nums[i++],nums[k]);
                
            }
        }
        while (i < nums.size()) {
            nums[i++] = 0;
        }
    }
};