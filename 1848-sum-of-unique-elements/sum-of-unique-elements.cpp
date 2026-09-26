class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_set<int> seen;
        unordered_set<int> duplicate;

        for (int x : nums) {
            if (seen.find(x) != seen.end()) {
                duplicate.insert(x);

            } else {
                seen.insert(x);
            }
        }

        int sum = 0;
        for (int x : seen) {
           if ( duplicate.find(x) == duplicate.end()) 
           {sum += x;
           }
        }
        return sum;
    }
};