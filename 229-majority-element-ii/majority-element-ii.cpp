class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        vector<int> ans;
        int limit = nums.size() / 3;

        for (auto x : mpp) { //using auto sucks tbf
            int element = x.first;
            int count = x.second;
        
        if (count > limit) {
            ans.push_back(element);
        }

        }
        return ans;
    }
};