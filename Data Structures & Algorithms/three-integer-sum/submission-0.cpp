class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int t = 0; t < nums.size(); t++) {

            //skip duplicate cho t
            if (t > 0 && nums[t] == nums[t - 1]) continue;

            int i = t + 1;
            int j = nums.size() - 1;

            while (i < j) {
                int sum = nums[t] + nums[i] + nums[j];

                if (sum == 0) {
                    res.push_back({nums[t], nums[i], nums[j]});

                    i++;
                    j--;

                    //skip duplicate i
                    while (i < j && nums[i] == nums[i - 1]) i++;

                    //skip duplicate j
                    while (i < j && nums[j] == nums[j + 1]) j--;

                } 
                else if (sum < 0) {
                    i++;
                } 
                else {
                    j--;
                }
            }
        }

        return res;
    }
};
