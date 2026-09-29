class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && abs(c - st.top()) == 32) {
                st.pop();
            } else {
                st.push(c);
            }
            
        }
        while(!st.empty())
        {
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};