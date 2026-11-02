class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>s(nums.begin(), nums.end());
        int ans = 0;

        for(int x : s){
            
            // Only start counting when the previous consecutive number does NOT exist in the set. (Because we want to start counting only from the beginning of a sequence, not from every element.)
            if(s.find(x - 1) == s.end()){ 

                int current = x;  // yha se consecutive start ho rha hai
                int count = 1;

                while(s.find(current + 1) != s.end()){
                    current++;
                    count++;
                }
                  ans = max(ans, count);
            }
        }
            return ans;
    }
};