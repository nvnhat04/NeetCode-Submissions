class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        set<int> st(nums.begin(), nums.end());
        vector<int> v(st.begin(), st.end());

        int len = 1;
        int maxLen = 1;

        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i + 1] - v[i] == 1) {
                len++;
            } else {
                maxLen = max(maxLen, len);
                len = 1;
            }
        }

        maxLen = max(maxLen, len);

        return maxLen;
    }
};
