class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        // check row
        for(vector v : board){
            unordered_map<char, int> mp;
            for(char c : v){
                if(c == '.'){
                    continue;
                }
                mp[c]++;
            }
            for(auto& m : mp){
                if(m.second > 1){
                    return false;
                }
            }
        }
        // check column
        for(int i = 0; i < n ; i++){
            unordered_map<char, int> mp;
            for(vector v : board){
                if(v[i] == '.') continue;
                mp[v[i]]++;
            }
            for(auto m : mp){
                if(m.second > 1) return false;
            }
        }
        // check squares 3x3
       for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {

            unordered_set<char> s;

            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    char c = board[x][y];

                    if (c == '.') continue;

                    if (s.count(c)) return false;

                    s.insert(c);
                    }
                }
            }
        }
        return true;
    }
};
