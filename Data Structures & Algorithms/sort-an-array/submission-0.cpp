class Solution {
public:

    void mergesort(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp;
        
        int i = start;
        int j = mid + 1;

        // Merge two sorted halves
        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // Remaining elements
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= end) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy back to original array
        for (int k = start; k <= end; k++) {
            nums[k] = temp[k - start];
        }
    }

    void merge(vector<int>& nums, int start, int end) {
        // Base case
        if (start >= end) return;

        int mid = (start + end) / 2;

        merge(nums, start, mid);
        merge(nums, mid + 1, end);

        mergesort(nums, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        merge(nums, 0, nums.size() - 1);
        return nums;
    }
};