class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> final_vec;
        sort(nums.begin(),nums.end());
        for(int i{0};i < static_cast<int>(nums.size())-2;i++)
        {
            if(i > 0  && nums[i] == nums[i - 1])
            {
                continue;
            }
            if(nums[i] > 0)
            {
                break;
            }
            int left {i + 1};
            int right {static_cast<int>(nums.size()) - 1};
            int sum{};
            while(left < right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if(sum < 0)
                {
                    left++;
                }
                else if(sum > 0)
                {
                    right--;
                }
                else
                {
                    vector<int> triplets{nums[i],nums[left],nums[right]};
                    final_vec.push_back(triplets);
                    left++;
                    right--;

                    while(left < right && nums[left] == nums[left - 1])
                    {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
            }
        }
        return final_vec;
    }
};