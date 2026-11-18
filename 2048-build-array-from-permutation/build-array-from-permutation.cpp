class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> temp(nums.size(),0);
        for( int i =0;i<nums.size();i++)
        {
            temp[i]=nums[nums[i]];
        }
        return temp;
        //had to just build the array using the given formula ans[i] = nums[nums[i]] lmao 
    }
};