/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
private:
    int findPeak(MountainArray &arr, int n) {
        int lo = 0, hi = n - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (arr.get(mid) < arr.get(mid + 1)) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        return lo;
    }

    int binarySearch(MountainArray &arr, int target, int lo, int hi, bool ascending) {
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int val = arr.get(mid);

            if (val == target) return mid;

            if (ascending ? val < target : val > target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return -1;
    }

public:
    int findInMountainArray(int target, MountainArray &arr) {
        int n = arr.length();
        int peak = findPeak(arr, n);

        
        int leftIdx = binarySearch(arr, target, 0, peak, true);
        if (leftIdx != -1) return leftIdx;

       
        return binarySearch(arr, target, peak + 1, n - 1, false);
    }
};
