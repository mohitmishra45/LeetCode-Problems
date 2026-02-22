class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>ans(n,0);
        st.push(n-1);
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            while(st.size()!=0 && arr[i]>=arr[st.top()])
            {
                st.pop();
            }
            if(st.size()==0) ans[i]=0;
            else ans[i]=st.top()-i;
            st.push(i);
        }
        return ans;
    }
};