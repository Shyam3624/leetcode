class Solution {
public:
    int romanToInt(string s) 
    {
        map<char,int> mp={
            {'M',1000},{'D',500},{'C',100},
            {'L',50},{'X',10},{'V',5},{'I',1}
            };
        int n=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]<mp[s[i+1]])
            {
             n-=mp[s[i]];
            }
            else
            {
                n+=mp[s[i]];
            }
        }
        return n;
    }
};