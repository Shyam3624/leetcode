class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int, int> lastSeen;
        int minLen = INT_MAX;

        for (int i = 0; i < cards.size(); i++) {
            if (lastSeen.find(cards[i]) != lastSeen.end()) {
                minLen = min(minLen, i - lastSeen[cards[i]] + 1);
            }
            lastSeen[cards[i]] = i;
        }

        return (minLen == INT_MAX) ? -1 : minLen;
    }
};