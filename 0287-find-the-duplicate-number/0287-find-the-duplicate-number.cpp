class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 3 steps
        //Make two pointer and points to start
        int slow=nums[0];
        int fast=nums[0];
        //Detect Cycle
        do
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        //Reset slow pointer to nums[0] then move slow and fast by one when they meet return the value return is duplicate
        slow=nums[0];
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};