class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_map<int,int> app;
     for(auto i : nums){
        app[i]++;
     }

   for(auto it : app){
    
    if(it.second >= 2 ){
        return true;
    }
} 
   return false;

       
    }
};