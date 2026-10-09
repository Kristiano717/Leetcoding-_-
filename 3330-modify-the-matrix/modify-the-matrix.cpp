class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> ans(m, vector<int>(n, 0));

        vector<int> col(n, -1);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = matrix[i][j];
                col[j] = max(col[j], matrix[i][j]); //storing max col value
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j <n; j++) {
                
                if (ans[i][j] == -1) {
                    ans[i][j] = col[j];
                }
            }
        }
        return ans;
    }
};