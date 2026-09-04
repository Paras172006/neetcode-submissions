class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if(n>m) return false;
        vector<int> fre(26,0);
        vector<int> fre2(26,0);

        for(auto ch : s1){
            fre[ch-'a']++;
        }
        int i = 0;
         int j = 0;

        while(j < m){
           fre2[s2[j] - 'a']++;
           while(j-i+1 > n){
            fre2[s2[i] - 'a']--;
            i++;
           }
           if(fre == fre2) return true;
           j++;
        }
        return false;
    }
};
