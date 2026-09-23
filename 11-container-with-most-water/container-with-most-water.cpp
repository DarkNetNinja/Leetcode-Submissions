class Solution {
public:
    int maxArea(vector<int>& height) {
        int left{0};
        int right{static_cast<int>(height.size())-1};
        int max_water {};

        while(left < right)
        {
            int width{right - left};
            int heights{min(height[right],height[left])};
            int water = width * heights;
            if(water > max_water)
            {
                max_water = water;
            }
            if(height[right] < height[left])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return max_water;
    }
};