class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
        string res=strs[0];
        for(int i=1;i<strs.size();i++)
        {
         int j=0;
         while(j<res.size() && j<strs[i].size() && res[j]==strs[i][j])
         {
            j++;
         }
         res=res.substr(0,j);
         if(res.empty())
         return "";
        }
     return res;   
    }
};