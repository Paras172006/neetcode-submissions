class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> in(numCourses,0);

        for(auto &i:prerequisites){
            int a = i[0];
            int b = i[1];

            adj[b].push_back(a);
            in[a]++;
        }
        queue<int> q;
        for(int i = 0;i<numCourses;i++){
            if(in[i] == 0){
                q.push(i);
            }
        }
        vector<int> res;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            res.push_back(top);
            for(auto &i : adj[top]){
                in[i]--;
                if(in[i] == 0){
                    q.push(i);
                }
            }
        }
       return res.size() == numCourses ? res : vector<int>{};
  
    }
};
