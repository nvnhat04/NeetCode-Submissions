class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxFreq = 0;
        int res = 0;
        int cnt[26] = {0};
        for(int right = 0; right < s.size(); right++){
            cnt[s[right] - 'A']++;
            maxFreq = max(maxFreq, cnt[s[right] - 'A']);
            while((right - left + 1) - maxFreq > k){
                cnt[s[left] - 'A']--;
                left++;
                
            }
         
            res = max(res, right - left + 1);
        }
    return res;
    }
};
