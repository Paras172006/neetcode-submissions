class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto it : nums){
            mp[it]++;
        }

        vector<pair<int,int>> vec;
        for(auto  it : mp){
            vec.push_back({it.first , it.second});
        }

        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            return a.second > b.second;
    });

        vector<int> run ;
        
        for(int i = 0;i<k;i++){
         run.push_back(vec[i].first);   
        }

        return run;
    }
};
