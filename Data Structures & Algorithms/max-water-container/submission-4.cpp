class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_ar = 0;
        int i = 0;
        int j = heights.size() - 1;
        while(i < j){
            max_ar = max(min(heights[i], heights[j])*(j-i), max_ar);
            if(heights[i] <= heights[j]) {
                i++;
            } else {
                j--;
            }
        } 
        
     
        return max_ar;
    }
};
