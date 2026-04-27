class Solution {
public:
    int scoreOfString(string s) {
        
          int sum = 0;
        for(auto i = 0;i<s.size()-1;i++){
           int ascii1 = (int)s[i];
           int ascii2 = (int)s[i+1];

           sum += abs(ascii1-ascii2);
        }

        return sum;
    }
};