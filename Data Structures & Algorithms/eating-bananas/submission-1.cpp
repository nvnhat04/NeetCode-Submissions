class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int right = *max_element(piles.begin(), piles.end());
        int left = 1;
        while(left < right){
            int mid = (right - left)/2 + left;
            long long t = 0;
            for(int j = 0; j < piles.size(); j++){
                t += ceil((double)piles[j]/mid);
            }
            if(t <= h){
                right = mid;
            } else{
                left = mid + 1;
            }
        }
        
        return left;
    }
};
