class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        vector<int> res(n, 1);
        // prefix
        int multi = 1;
        for(int i = n - 2; i >= 0; i--){
            multi *= nums[i+1];
            prefix[i] = multi;
        }
        multi = 1;
        for(int j = 1; j < n; j++){
            multi *= nums[j - 1];
            suffix[j] = multi;
        }
        for(int k = 0; k < n; k++){
            // cout<< prefix[k] << "-" << suffix[k] << ";";
            res[k] = prefix[k] * suffix[k];
        }
        return res;
    }
};
