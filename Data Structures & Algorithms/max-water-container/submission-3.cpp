class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_ar = 0;
        int i = 0;
        int j = heights.size() - 1;
        while(i < j){
            int h = min(heights[i], heights[j]);
            int w = j - i;
            max_ar = max(h*w, max_ar);
            if(heights[i] <= heights[j]) {
                i++;
            } else {
                j--;
            }
           
        } 
        
     
        return max_ar;
    }
};
