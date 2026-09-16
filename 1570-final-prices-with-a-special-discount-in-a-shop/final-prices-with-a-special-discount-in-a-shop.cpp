class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;

        int n = prices.size();
        vector<int> ans =prices;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                // some random ass condition that discounts are equal to
                // incoming_price - current value
                ans[st.top()] = prices[st.top()] - prices[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};