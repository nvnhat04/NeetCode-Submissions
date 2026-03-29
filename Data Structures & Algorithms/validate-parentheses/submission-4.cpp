class Solution {
public:
    bool isValid(string s) {
        vector<char> st;
        unordered_map<char, char> mp = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            if (mp.count(c) == 0) {
                st.push_back(c);
            } else {
                if (st.empty() || st.back() != mp[c]) return false;
                st.pop_back();
            }
        }

        return st.empty();
    }
};
