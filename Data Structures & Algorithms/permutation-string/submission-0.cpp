class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();

        if(m < n) return false;
        int l = 0;
        sort(s1.begin(),s1.end());
        for(int i = 0;i<=m-n;i++){
            string se = s2.substr(i,n);
            sort(se.begin(),se.end());
            if(se == s1){
                return true;
            }
            l++;
        }
        return false;
    }
};
