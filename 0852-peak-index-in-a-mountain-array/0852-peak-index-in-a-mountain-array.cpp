class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // We are on increasing side
                s = mid + 1;
            } 
            else {
                // We are on decreasing side
                e = mid;
            }
        }

        return s;
    }
};