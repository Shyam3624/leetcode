class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); ++i) {
            char cs = s[i];
            char ct = t[i];

            // If mapping exists, check consistency
            if (s_to_t.count(cs) && s_to_t[cs] != ct)
                return false;

            if (t_to_s.count(ct) && t_to_s[ct] != cs)
                return false;

            // Set the mapping
            s_to_t[cs] = ct;
            t_to_s[ct] = cs;
        }

        return true;
    }
};

  