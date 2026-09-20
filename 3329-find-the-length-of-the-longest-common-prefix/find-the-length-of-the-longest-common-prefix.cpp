class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> prefixes;

        // Store all prefixes of arr1
        for(int num : arr1)
        {
            string s = to_string(num);

            string prefix{};

            for(char c : s)
            {
                prefix += c;
                prefixes.insert(prefix);
            }
        }

        int cp{};

        // Check prefixes of arr2
        for(int num : arr2)
        {
            string s = to_string(num);

            string prefix{};

            for(char c : s)
            {
                prefix += c;

                if(prefixes.find(prefix) != prefixes.end())
                {
                    cp = max(cp, static_cast<int>(prefix.length()));
                }
                else
                {
                    break;
                }
            }
        }

        return cp;
    }
};