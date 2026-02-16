class Solution {
public:
    bool find132pattern(vector<int>& nums) {
         int n=nums.size();
         stack<int>st;
         st.push(nums[n-1]);
         int temp=INT_MIN;
         for(int i=n-2;i>=0;i--)
         {
            if(nums[i]<temp)
            {
                return true;
            }
         while(!st.empty() && st.top()<nums[i])
         {
            temp=st.top();
            st.pop();
         }
        st.push(nums[i]);
         }
         return false;
    }
};