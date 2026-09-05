class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        if (k > n) return {-1};

        vector<int> ans;
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});

            if (i >= k - 1) {
                // Remove elements outside the current window
                while (pq.top().second <= i - k) {
                    pq.pop();
                }

                ans.push_back(pq.top().first);
            }
        }

        return ans;
    }
};