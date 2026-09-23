class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            total = total + nums[i];
        }
        int target = total - x;

        if (target < 0) {
            return -1;
        }
        if (target == 0) {
            return n;
        }

        int left = 0;
        int right;
        int sum = 0;
        int longest = INT_MIN;

        for (int right = 0; right < n; right++) {
            sum = sum + nums[right];
            while (left <= right && sum > target) {
                sum -= nums[left];
                 left++;
            }
            if (sum == target) {
                longest = max(longest, right - left + 1);
            }
        }
        if (longest == INT_MIN) {
            return -1;
        }
        return n - longest;
    }
};
