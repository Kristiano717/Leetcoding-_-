class Solution {
public:
    int minOperations(string s) {
        bool sorted = true;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                sorted = false;
                break;
            }
        }
        if (sorted == true) {
            return 0;
        }
        if (n == 2) {
            return -1; // no sorting reqiured to be fair..
        }
        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s[0] == mn || s[n - 1] == mx) {
            return 1;
        }
        for (int i = 1; i < n-1; i++) {
            if (s[i] == mn || s[i] == mx) {
                return 2;
            }
        }
        return 3;
    }
};