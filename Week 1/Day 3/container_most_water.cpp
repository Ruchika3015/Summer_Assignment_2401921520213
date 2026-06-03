class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxwater=0;
        int water=1;
        while(l<r)
        {
            int h=min(height[l],height[r]);
            int width=r-l;
            water=h*width;
            maxwater=max(water,maxwater);
            if(height[l]<height[r])
            l++;
            else
            r--;
        }
        return maxwater;
    }
};