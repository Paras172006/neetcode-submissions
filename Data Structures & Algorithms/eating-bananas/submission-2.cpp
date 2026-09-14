class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int ans = r;
        while(l <= r){
            int mid = l+(r-l)/2;
            long long  cnt = 0;
             for(int i = 0;i<piles.size();i++){
                  cnt += (piles[i]+mid-1)/mid;
             }
             if(cnt <= h){
                  ans = mid;
                r = mid-1;
             }
             else {
                l = mid+1;
             }
        }
        return ans;
    }
};
