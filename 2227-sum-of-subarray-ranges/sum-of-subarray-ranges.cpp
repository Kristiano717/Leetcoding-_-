class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        stack<int> st;

        for (int i = 0; i <= n; i++) // calucaslting for the  minimums.
        {
            while (!st.empty() && (i == n || nums[st.top()] > nums[i])) {
                int j = st.top();
                st.pop();

                int k;
                if (st.empty()) {
                    k = -1;
                } else {
                    k = st.top();
                }
                long long righthandside = i - j;
                long long lefthandside = j - k;
                long long count = lefthandside * righthandside;

                ans = ans - (long long)nums[j] * count;
            }
            st.push(i);
        }
        st = stack<int>();
        for (int i = 0; i <= n; i++) // calucaslting for the  minimums.
        {
            while (!st.empty() && (i == n || nums[st.top()] < nums[i])) {
                int j = st.top();
                st.pop();

                int k;
                if (st.empty()) {
                     k = -1;
                } else {
                    k = st.top();
                }
                long long righthandside = i - j;
                long long lefthandside = j - k;
                long long count = lefthandside * righthandside;

                ans = ans + (long long)nums[j] * count;
            }
            st.push(i);
        }
        return ans;
    }

    
    };