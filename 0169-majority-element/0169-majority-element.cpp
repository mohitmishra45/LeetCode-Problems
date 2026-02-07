class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                candidate=nums[i];
            }
            if(nums[i]==candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        int freq=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==candidate)
            {
                freq++;
            }
        }
        if(freq>nums.size()/2)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    }
};