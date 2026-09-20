class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> positions;

        for(int i{0};i < static_cast<int>(nums.size());i++)
        {
            int needed{target - nums[i]};
            if(positions.find(needed) != positions.end())
            {
                return{positions[needed],i};
            }
            positions[nums[i]] = i;
        }
        return {};
    }
};