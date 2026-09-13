class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int n = m.size();        // rows
        int p = m[0].size();     // columns

        int l = 0;
        int r = n * p - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            int row = mid / p;   // use columns
            int col = mid % p;   // use columns

            if (m[row][col] == target) {
                return true;
            }
            else if (m[row][col] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }

        return false;
    }
};