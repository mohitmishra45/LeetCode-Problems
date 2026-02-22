class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(st.size()!=0 && arr[i]>=arr[st.top()])
            {
                st.pop();
            }
            if(st.size()!=0) ans[i]=st.top()-i;
            st.push(i);
        }
        return ans;
    }
};