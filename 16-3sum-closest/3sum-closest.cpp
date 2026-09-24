class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int best_sum{nums[0] + nums[1] + nums[2]};
        int min_diff{abs(best_sum - target)};

        for(int i {0}; i < static_cast<int>(nums.size()) - 2;i++)
        {
           int left{i + 1};
           int right{static_cast<int>(nums.size()) - 1};
           int sum {};
           

           while(left < right)
           {
                int current_diff{};
                sum = nums[i] + nums[left] + nums[right];
                current_diff = abs(sum - target);

                if(current_diff < min_diff)
                {
                    min_diff = current_diff;
                    best_sum = sum;

                }

                if(sum < target)
                {
                    left++;
                }
                else if(sum > target)
                {
                    right--;
                }
                else
                {
                    return best_sum;
                }
           }
        }
        return best_sum;
    }
};