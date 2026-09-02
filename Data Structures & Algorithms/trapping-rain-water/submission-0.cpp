class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int water = 0;

        for (int right = 0; right < height.size(); right++) {

            while (!st.empty() && height[right] > height[st.top()]) {

                int middle = st.top();
                st.pop();

                // No left boundary
                if (st.empty()) {
                    break;
                }

                int left = st.top();

                int width = right - left - 1;

                int boundedHeight =
                    min(height[left], height[right])
                    - height[middle];

                water += width * boundedHeight;
            }

            st.push(right);
        }

        return water;
    }
};