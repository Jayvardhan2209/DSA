class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int s = arr.size() - 1;

        if (s == 0) return arr[0];
        if (s == 1) return arr[0];

        int st = 0;
        int end = s;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Boundary cases
            if (mid == 0) {
                if (arr[0] != arr[1])
                    return arr[0];
                st = mid + 1;
                continue;
            }

            if (mid == s) {
                if (arr[s] != arr[s - 1])
                    return arr[s];
                end = mid - 1;
                continue;
            }

            // Single element found
            if (arr[mid - 1] != arr[mid] &&
                arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }

            // Your original logic
            if (mid % 2 == 0) {
                if (arr[mid - 1] == arr[mid]) {
                    end = mid - 1;
                }
                else {
                    st = mid + 1;
                }
            }
            else {
                if (arr[mid - 1] == arr[mid]) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};