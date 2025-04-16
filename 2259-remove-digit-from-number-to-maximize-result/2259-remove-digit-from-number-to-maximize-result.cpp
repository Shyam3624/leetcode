class Solution {
public:
    string removeDigit(string number, char digit) {
        int idx = -1;

        for (int i = 0; i < number.size(); ++i) {
            if (number[i] == digit) {
                idx = i;
                // Check if removing this digit makes the next digit bigger
                if (i + 1 < number.size() && number[i + 1] > digit) {
                    break;
                }
            }
        }

        // Remove the digit at index 'idx'
        return number.substr(0, idx) + number.substr(idx + 1);
        
    }
};