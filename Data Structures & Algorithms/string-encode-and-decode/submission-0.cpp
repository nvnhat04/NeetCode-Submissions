#include <string>

class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s : strs){
            res += to_string(s.size()) + '#' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            // 1. tìm dấu #
            int j = i;
            while (s[j] != '#') j++;

            // 2. parse length
            int len = stoi(s.substr(i, j - i));

            // 3. lấy string
            string word = s.substr(j + 1, len);
            res.push_back(word);
            // 4. update pointer
            i = j + 1 + len;
        }

        return res;
    }
};
