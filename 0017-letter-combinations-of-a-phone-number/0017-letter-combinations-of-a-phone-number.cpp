class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        map<char,string> mp = {
            {'2',"abc"}, {'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
            {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}
        };

        vector<string> result = {""};  // start with empty string

        for (char d : digits) {
            vector<string> temp;
            for (string comb : result) {
                for (char c : mp[d]) {
                    temp.push_back(comb + c);
                }
            }
            result = move(temp); // update result
        }

        return result;
    }
};
