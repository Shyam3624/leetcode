class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()!=t.size())
        return false;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(char c:t)
        {
            if(mp[c]!=0)
            {
                mp[c]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};