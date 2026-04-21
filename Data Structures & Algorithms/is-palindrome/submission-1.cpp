class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
       transform(s.begin(), s.end(), s.begin(), ::tolower);
        while(i < j){
            while (i < j && !isalnum((unsigned char)s[i])) i++;
            while (i < j && !isalnum((unsigned char)s[j])) j--;
            if(s[i] != s[j] ){
                return false;
            }
            i++;
            j--;
        }

        return true;
        
    }
};
