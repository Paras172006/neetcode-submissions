class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void r(vector<int>& nums, int target, int i){
        if(target == 0){
            ans.push_back(path);
            return ;

        }
        if(i>=nums.size() || target < 0){
            return ;
        }
        path.push_back(nums[i]);
        r(nums,target-nums[i],i);
        path.pop_back();
        r(nums,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        r(nums,target,0);
        return ans;
    }
};
