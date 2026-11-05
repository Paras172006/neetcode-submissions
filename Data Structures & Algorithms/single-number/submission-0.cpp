class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int st = 0;
        for( int i = 0;i<nums.size(); i++){
           st ^= nums[i];  
        }
        return st;
    }
};
