class Solution {
public:
    int trap(vector<int>& height) {
        int max_area = 0;
       
        for(int i = 0; i < height.size(); i++){
            int l = 0;
            int r = 0;
            int t = i - 1;
            int k = i+1;
            while(t >= 0){
                if(l < height[t]) l = height[t];
                t--;
            }
            while(k < height.size()){
                if(r < height[k]) r = height[k];
                k++;
            } 
            int s = min(l, r) - height[i];
            cout<< i << " " << l << " " << r << " "<< s << "\n";
            if(s > 0) max_area += s;
        }
        return max_area;
    }
};
