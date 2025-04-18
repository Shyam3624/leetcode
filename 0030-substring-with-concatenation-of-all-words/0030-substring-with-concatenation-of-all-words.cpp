class Solution {
    unordered_map<string,unsigned int> map;
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        unsigned int length=words[0].size();
        map.clear();
        for(const string& word:words)
           map[word]++;
        for(unsigned int offset=0;offset<length;++offset)
        {
            unsigned int size=0;
            unordered_map<string,unsigned int> seen;
            for(unsigned int i=offset;i+length<=s.size();i+=length)
            {
                string sub=s.substr(i,length);
                auto itr=map.find(sub);
                if (itr==map.end())
                {
                    seen.clear();
                    size=0;
                    continue;
                }
                ++seen[sub];
                ++size;
                while (seen[sub]>itr->second)
                {
                    string first=s.substr(i-(size-1)*length,length);
                    --seen[first];
                    --size;
                }
                if(size==words.size())
                  res.push_back(i-(size-1)*length);
            }
        }
        return res;
    }
};