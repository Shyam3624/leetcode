class Solution {
public:
    string minWindow(string s, string t) {
        int left = 0, counter=t.size(); 
    int minLen = INT_MAX;
    int start = 0; 
    unordered_map<char, int> mp;

    for (char ch: t){
      mp[ch]++;
    }

    for (int right=0; right<s.size(); right++){
      counter = mp[s[right]] > 0 ? counter-1 : counter;
      mp[s[right]]--;

      while (counter == 0){
        if (right - left + 1 < minLen){
          start = left;
          minLen = right - left + 1;
        }
        mp[s[left]]++;
        if (mp[s[left]] > 0) counter++;
        left++;
      }
    }

    if (minLen != INT_MAX) return s.substr(start, minLen);
    return "";
  }
    
};