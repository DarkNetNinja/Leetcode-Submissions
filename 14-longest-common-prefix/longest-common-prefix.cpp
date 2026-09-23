class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string final_string = "";

        
        for(int i{0};i < static_cast<int>(strs[0].size());i++)
        {
            bool match = true;
            char first_string = strs[0][i];
            for(int j{0};j < static_cast<int>(strs.size());j++)
            {
                

                if(i >= strs[j].size())
                {
                    match = false;
                    break;
                }
                if(first_string != strs[j][i])
                {
                    match = false;
                    break;
                }
                
            }
            if(match)
            {
                final_string += first_string;
            }
            else{
                break;
            }

        }
        return final_string;
    }
};