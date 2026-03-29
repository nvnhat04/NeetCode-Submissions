class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        string t = s;
        cout<< t << "\n";
        reverse(s.begin(), s.end());
        cout << s ;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
