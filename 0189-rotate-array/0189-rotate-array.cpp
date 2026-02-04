class Solution {
public:
    void reverse1(vector<int>&nums,int i,int j)
    {
        while(i<=j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n; //to overcome overflow
        reverse1(nums,0,n-1);
        reverse1(nums,0,k-1);
        reverse1(nums,k,n-1);
        
    }
};