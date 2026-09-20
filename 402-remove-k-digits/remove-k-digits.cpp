class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans;
        for (char x : num) {
            while (!st.empty() && k > 0 && st.top() > x) {
                st.pop();
                k--;
            }
            st.push(x);
        }
        // while(k>0 &&) remove the remaining from end of stack.
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse (ans.begin(), ans.end());
        int i =0;
        while(i<ans.size() && ans[i]=='0')
        {
            i++;
        }
        ans = ans.substr(i);
        if( ans.empty())
        {
            return "0";

        }
        else
        {
        return ans;
        }
    }
};