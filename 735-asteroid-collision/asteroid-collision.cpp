class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> ans = asteroids;
        bool changed = true;

        while (changed) {

            changed = false;

            for (int i = 0; i + 1 < (int)ans.size(); i++) {

                if (ans[i] > 0 && ans[i + 1] < 0) {

                    int left = ans[i];
                    int right = abs(ans[i + 1]);

                    if (left < right) {
                        ans.erase(ans.begin() + i);
                    } else if (left > right) {
                        ans.erase(ans.begin() + i + 1);
                    } else {
                        ans.erase(ans.begin() + i, ans.begin() + i + 2);
                    }

                    changed = true;
                    break;
                }
            }
        }

        return ans;
    }
};