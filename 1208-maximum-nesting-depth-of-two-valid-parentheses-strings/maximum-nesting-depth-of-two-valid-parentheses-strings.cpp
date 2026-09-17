class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int> ans(n);
        int maxm = 0;
        int depth = 0;
        // we have 2 parts - first for checking and getting the maximum depth
        // possible and the second one so that we can group on basd of the max
        // number being the limit.
        for (char i : seq) {
            if ( i == '(') {

                depth++;
                maxm = max(depth, maxm);
            } else {
                depth--;
            }
        }
        int grouper = maxm / 2;
        for (int i = 0; i < n; i++) {
            if (seq[i] == '(') {
                depth++;
                if (depth > grouper) {
                    ans[i] = 1;
                } else {
                    ans[i] = 0;
                }

            }
            // if the value isnt oepning bracklet i wouldmstill check it.
            else {
                
                if (depth > grouper) {
                    ans[i] = 1;
                } else {
                    ans[i] = 0;
                }
                depth--;
            }
        }
        return ans;
    }
};