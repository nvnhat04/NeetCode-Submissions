class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        int n = tmp.size();
        vector<int> st;
        vector<int> res(n,0);
        for(int i = 0; i < n; i++){
           while(!st.empty() && tmp[st.back()] < tmp[i]){
            int idx = st.back();
            st.pop_back();
            res[idx] = i - idx;
           }
           st.push_back(i);
        }
        return res;
    }
};
