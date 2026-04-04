class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = m-1;
        while(left <= right){
            int mid = left + (right - left)/2;
           if(matrix[mid][0] <= target && target <=  matrix[mid][n-1]){
             int l = 0;
             int r = n - 1;
             while(l <= r){
                int md = l + (r - l) / 2;
                if(matrix[mid][md] == target) return true;
                if(matrix[mid][md] < target){
                    l = md + 1;
                } else{
                    r = md - 1;
                }
            }
            return false;
           }
           if(matrix[mid][n-1] < target){
                left = mid +1 ;
           } else{
                right = mid - 1;
           }

        }
        return false;
    }
};
