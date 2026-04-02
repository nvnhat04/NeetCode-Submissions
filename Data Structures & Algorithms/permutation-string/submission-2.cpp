class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if(n > m) return false;

        vector<int> cnt(26, 0);

        for(char c : s1) cnt[c - 'a']++;

        for(int i = 0; i < m; i++){
            cnt[s2[i] - 'a']--;

            if(i >= n){
                cnt[s2[i - n] - 'a']++;
            }

            if(cnt == vector<int>(26, 0)){
                return true;
            }
        }
        return false;
    }
};
