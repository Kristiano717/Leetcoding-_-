class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int left =0;
        int right =arr.size()-1;
        if(arr.size()<3)
        {
            return false;
        }
        while(left+1<arr.size()-1 && arr[left]<arr[left+1])
        {
            left++;
        }
        while(right-1>0 && arr[right]<arr[right-1])
        {
                right--;
        }
        return left==right;
    }
};