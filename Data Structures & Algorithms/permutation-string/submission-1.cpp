class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }
        int n = s1.size();
        int cnt[26] = {0};
        
        for(int t = 0; t < n ; t++){
            cnt[s1[t] - 'a']++;
        }
        for(int i = 0 ; i < s2.size(); i++){
           cnt[s2[i] - 'a']--;
           if(i >= n){
            cnt[s2[i - n] - 'a']++;
           }
            bool ok = true;
            for(int k = 0; k < 26; k++){
                if(cnt[k] != 0){
                    ok = false;
                    break;
                }
            }
            if(ok) return true;
        }
        return false;
    }
};
