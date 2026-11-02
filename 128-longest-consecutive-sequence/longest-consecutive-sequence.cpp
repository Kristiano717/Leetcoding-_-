class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int longest = 1;
        int current = 1;
        int i = 1;

        while (i < n) {
            if (nums[i] == nums[i - 1]) {
                i++; // skip duplicate
            }
            else if (nums[i] == nums[i - 1] + 1) {
                current++;
                i++; // move forward
            }
            else {
                longest = max(longest, current);
                current = 1;
                i++; // reset and move forward
            }
        }

        return max(longest, current);
    }
};

