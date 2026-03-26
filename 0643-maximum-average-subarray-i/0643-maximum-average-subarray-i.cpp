class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;;
        
        double sum=0;
        double ans=INT_MIN;

        while(j<n)
        {
            sum+=nums[j];
            if(j-i+1<k)    //Checking for window size
            {
                j++;
            }

            else if(j-i+1==k)
            {
                ans=max(ans,sum);
                sum-=nums[i];        //Sliding the Window
                i++;
                j++;
            }
        }
        return ans/k;
    }
};