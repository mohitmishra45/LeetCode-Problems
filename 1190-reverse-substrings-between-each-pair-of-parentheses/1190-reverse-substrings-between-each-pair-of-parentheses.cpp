class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<char> st;
        for(int i = 0; i < n; i++) {
            if(s[i] != ')') {
                st.push(s[i]);
            }
            else {
                string temp = "";
                while(!st.empty() && st.top() != '(') {
                    temp = st.top() + temp;
                    st.pop();
                }
                if(!st.empty()) st.pop();  
                for(int j =temp.length()-1; j>=0; j--) {
                    st.push(temp[j]);
                }
            }
        }
        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
