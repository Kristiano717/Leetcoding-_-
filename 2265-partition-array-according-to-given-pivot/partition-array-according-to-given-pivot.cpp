class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> ans2;
        vector<int> ans3;
        for (int i : nums) {
            if (i < pivot) {

                ans.push_back(i);
            } else if (i == pivot) {
                ans2.push_back(i);
            } else {
                ans3.push_back(i);
            }
        }
        // ans mei sab inserto krdo atp.
        ans.insert(ans.end(), ans2.begin(), ans2.end());
        ans.insert(ans.end(), ans3.begin(), ans3.end());

        return ans;
    }
};