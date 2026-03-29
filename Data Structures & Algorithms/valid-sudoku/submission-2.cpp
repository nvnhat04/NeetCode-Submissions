class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;

        // check row
        for (int i = 0; i < n; i++) {
            int freq[9] = {0};
            for (int j = 0; j < n; j++) {
                char c = board[i][j];
                if (c == '.') continue;

                int idx = c - '1';
                if (freq[idx]) return false;
                freq[idx] = 1;
            }
        }

        // check column
        for (int j = 0; j < n; j++) {
            int freq[9] = {0};
            for (int i = 0; i < n; i++) {
                char c = board[i][j];
                if (c == '.') continue;

                int idx = c - '1';
                if (freq[idx]) return false;
                freq[idx] = 1;
            }
        }

        // check square
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {

                int freq[9] = {0};

                for (int x = i; x < i + 3; x++) {
                    for (int y = j; y < j + 3; y++) {
                        char c = board[x][y];
                        if (c == '.') continue;

                        int idx = c - '1';
                        if (freq[idx]) return false;
                        freq[idx] = 1;
                    }
                }
            }
        }

        return true;
    }
};
