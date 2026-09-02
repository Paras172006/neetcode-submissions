class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxi = 0;
        vector<int> fr(256,0);
        for(int i = 0;i<s.size();i++){
            fr[s[i]]++;
            while(fr[s[i]] > 1){
                fr[s[l]]--;
                l++;
            }
            maxi = max(maxi,i-l+1);
        }
        return maxi;
    }
};
