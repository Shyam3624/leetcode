class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());  // Sort to get the anagram key
            m[key].push_back(s);
        }

        vector<vector<string>> res;
        for (auto& pair : m) {
            res.push_back(pair.second);
        }

        return res;
    }
};
