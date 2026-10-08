class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int , int>mpp;
        for( int x  : nums)
        {
            mpp[x]++;
        }
        int ans =0;
        for( auto x : mpp)
        {
            if (x.second==2)
            {
                ans= ans^x.first;
            }
        }
        return ans;
    }
};