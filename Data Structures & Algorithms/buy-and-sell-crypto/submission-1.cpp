class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0;
        int i = 0;
        int j  = 1;
        // int b = s = 0;
        while (j < prices.size()){
            m = max(m, prices[j] - prices[i]);
            if(prices[i] > prices[j]){
                i = j;
            }
            j++;
        } 
        return m;
    }
};
