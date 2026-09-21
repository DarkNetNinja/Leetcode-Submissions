class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers;
        int longest = 0;
        for(int num:nums)
        {
            numbers.insert(num);
        }

        for(int num:numbers)
        {
            if(numbers.find(num - 1) == numbers.end())
            {
                int length = 1;
                int current = num;
                while(numbers.find(current + 1) != numbers.end())
                {
                    current++;
                    length++;
                }
                longest = max(longest,length);
            }
            
        }
        return longest;

    }
};