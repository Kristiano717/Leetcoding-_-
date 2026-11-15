class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int , int>mpp;

        for(int i : arr)
        {
            mpp[i]++;
        }
        int lucky=-1;
        for(auto& [key , value]:mpp)
        {
            if(key==value)
            {
                lucky= max(lucky , key);
            }
        }
        return lucky;
    }
};