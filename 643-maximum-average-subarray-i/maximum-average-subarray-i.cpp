class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum{};

        for(int i{0};i < k;i++)
        {
            sum += nums[i];
        }
        int max_sum{sum};
        
        for(int right{k};right < static_cast<int>(nums.size());right++)
        {
            sum -= nums[right - k];
            sum += nums[right];

            max_sum = max(max_sum,sum);
        }
        return static_cast<double>(max_sum)/k;

        


    }
};