class Solution {
public:
    bool areOccurrencesEqual(string s) {
         //the logic we have used here is to put everything in a mapp , unorderedmap and then check each values frequency and if they match or not
        unordered_map<char , int>mpp;

        for( char c : s)
        {
            mpp[c]++;
        }
        int frq = mpp.begin()->second; // tis is my first time using this and hence its a remainder its the ->second meaning it will print the value , if mpp,begin()->first then the char will print.
        for( auto x : mpp)
        {
            if(x.second!=frq)
            {
                return false;
            }
        }
        return true;
            }
};