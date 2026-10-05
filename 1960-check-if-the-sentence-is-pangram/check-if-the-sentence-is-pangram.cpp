class Solution {
public:
    bool checkIfPangram(string sentence) {
        //panagram

        unordered_set<char>st;

        for(char x : sentence)
        {
            st.insert(x);
        }
        return st.size()==26;
    }
};