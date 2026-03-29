class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 0;
        int i = 0;
        int j  = 1;
        while (j < prices.size()){
            if(prices[i] > prices[j]){
                i = j;
            } else{
                m = max(m, prices[j] - prices[i]);
            }
            j++;
        } 
        return m;
    }
};
