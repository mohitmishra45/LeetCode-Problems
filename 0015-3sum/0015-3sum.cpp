class Solution {
public:
    vector<vector<int>>result;
    void twoSum(vector<int>&nums,int target,int i,int j)
    {
        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(sum>target) j--;
            else if(sum<target) i++;
            else
            {
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j]==nums[j-1]) j--;
                result.push_back({-target,nums[i],nums[j]});
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3) return {};
        //Sorting
        sort(nums.begin(),nums.end());
        result.clear();
        //Fixing One Value
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;

        int n1=nums[i];
        int target=-n1;
        twoSum(nums,target,i+1,nums.size()-1);
        }
        return result;
    }
};