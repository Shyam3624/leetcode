class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        istringstream iss(s);

        // Split s into words
        while (iss >> word) {
            words.push_back(word);
        }

        // Pattern and words must be the same length
        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < pattern.size(); ++i) {
            char p = pattern[i];
            string w = words[i];

            if (p2w.count(p) && p2w[p] != w)
                return false;
            if (w2p.count(w) && w2p[w] != p)
                return false;

            p2w[p] = w;
            w2p[w] = p;
        }
        return true;
    }
};