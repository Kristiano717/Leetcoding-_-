class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int T = tomatoSlices;
        int C = cheeseSlices;

        if (T % 2 != 0 ||
            T > 4 * C ||
            T < 2 * C) {
            return {};
        }

        int J = (T - 2 * C) / 2;
        int S = (T - 4 * J) / 2;

        return {J, S};
    }
};