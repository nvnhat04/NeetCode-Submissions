class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> vec;
        vector<bool> used(n, false);
        for(int i = 0; i < strs.size(); i++){
            if(used[i]) continue;
            vector<string> gr;
            gr.push_back(strs[i]);
            used[i] = true;
            for(int j = i + 1; j < strs.size(); j++){
                if(used[j]) continue;
                int cnt[26] = {0};
                bool check = true;
                for(char c : strs[i]) cnt[c - 'a']++;
                for(char c : strs[j]) cnt[c - 'a']--;
                for(int k = 0; k < 26; k++){
                    if(cnt[k] != 0){
                        check = false;
                     break;
                    }
                    
                }
                if(check){
                    gr.push_back(strs[j]);
                    used[j] = true;
                }
            }
            vec.push_back(gr);
        }
        return vec;
    }
};
