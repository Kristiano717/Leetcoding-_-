class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxw = 0;
        for (int i = 0; i < sentences.size(); i++) {
            int words = 1;
            for (char c : sentences[i]) {
                if (c==' ') {
                    words++;
                }
            }
            maxw = max(maxw, words);
        }
        return maxw;
    }
};