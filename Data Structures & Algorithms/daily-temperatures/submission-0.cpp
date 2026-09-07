class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> res(n);
        // res.push_back(0);
        stack<int> st;
        // st.push(n-1);
        for(int i = n-1;i >= 0;i--){
           
               while(!st.empty() && temp[st.top()] <= temp[i]  ){
                   st.pop();
               }
               if(st.empty()){
                res[i] = 0;
                st.push(i);
               }else{
                res[i] = st.top()-i;
                st.push(i);
               }
            
        }
        return res;
    }
};
