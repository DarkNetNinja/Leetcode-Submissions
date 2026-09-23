class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int needed {};

        for(int i{0};i < static_cast<int>(nums.size());i++)
        {
            needed = target - nums[i];
            if(seen.find(needed) != seen.end())
            {
                return {seen[needed],i};
            }

            seen[nums[i]] = i;
        }
        return {};
    }
};