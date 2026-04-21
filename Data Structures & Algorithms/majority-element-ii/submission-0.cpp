class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(auto it:nums){
           mp[it]++; 
        }
        vector<int> result;
        int k = n/3;
        for(auto it : mp){
            if(it.second > k){
                result.push_back(it.first);
            }
        }

        return result;
        
    }
};