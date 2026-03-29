class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < n ; i++){
            int multi = 1;
            for(int j = 0; j < n; j++){
                if(j != i){
                    multi*= nums[j];
                }
            }
            res.push_back(multi);
        }
        return res;
    }
};
