class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        int n = word1.size();
        int m = word2.size();
        string s;
        while(i < n && j < m){
           s += word1[i++];
           s += word2[j++];

        }
        while(i < n){
             s += word1[i++]; 
        }
        while(j < m){
             s += word2[j++]; 
        }
        return s;
    }
};