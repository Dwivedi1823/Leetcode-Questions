class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int s = 0;
        int e = height.size() - 1;
        while(s < e){
            max_area = max(max_area, min(height[s],height[e])*(e-s));
            if(height[s] > height[e])
                e--;
            else
                s++;
        }
        return max_area;
    }
};
