class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = 0;
        for(int i = 1;i<prices.size();i++){
            mini  = min(mini,prices[i-1]);
            maxi = max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};
