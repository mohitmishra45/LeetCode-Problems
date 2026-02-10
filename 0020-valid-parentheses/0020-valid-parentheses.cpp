class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0) return false;
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') st.push(')');
            else if(s[i]=='{') st.push('}');
            else if(s[i]=='[') st.push(']');
            else
            {
                if(st.size()==0 || st.top()!=s[i])
                {
                    return false;
                }
                    st.pop();
            }
            

        }
        if(st.size()==0) return true;
        else return false;
            
    }
};