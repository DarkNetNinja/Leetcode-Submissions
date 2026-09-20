class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        int minLength{static_cast<int>(strs[0].size())};
        for(int i{1};i < static_cast<int>(strs.size());i++)
        {
            minLength = min(minLength,static_cast<int>(strs[i].size()));
        }

        for(int j{0};j < minLength;j++)
        {
            char current{strs[0][j]};
            for(int i{0};i < static_cast<int>(strs.size());i++)
            {
                
                if(strs[i][j] != current)
                {
                    return prefix;
                }
            }
            prefix += current;
        }
        return prefix;

    }
};