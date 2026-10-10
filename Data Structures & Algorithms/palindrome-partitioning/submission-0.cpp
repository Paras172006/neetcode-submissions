
class Solution {
public:
    vector<vector<string>> ans;

    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }

        return true;
    }

    void solve(string s, int start, int end,
               vector<string>& temp) {

        if (start == s.size()) {
            ans.push_back(temp);
            return;
        }

        if (end == s.size())
            return;

        string part = s.substr(start, end - start + 1);

        // INCLUDE: choose this substring if palindrome
        if (isPalindrome(part)) {
            temp.push_back(part);

            solve(s, end + 1, end + 1, temp);

            temp.pop_back();
        }

        // EXCLUDE: extend the substring by moving end
        solve(s, start, end + 1, temp);
    }

    vector<vector<string>> partition(string s) {
        vector<string> temp;
        solve(s, 0, 0, temp);
        return ans;
    }
};
