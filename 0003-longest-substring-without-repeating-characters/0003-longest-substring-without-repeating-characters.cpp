class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> str;
        int maxl=0;
        for(char c:s)
        {
            auto it = find(str.begin(), str.end(), c);
            if (it != str.end()) 
            {
                str.erase(str.begin(), it + 1);
            }
            str.push_back(c);
            if(maxl<str.size())
            maxl=str.size();
        }
        return maxl;
    }
};