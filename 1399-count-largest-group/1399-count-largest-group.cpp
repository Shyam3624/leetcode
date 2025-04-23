#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        map<int, int> mp;
        
        for (int i = 1; i <= n; i++) {
            int sum = 0, num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            mp[sum]++;
        }

        int maxSize = 0;
        for (auto it : mp) {
            if (it.second > maxSize)
                maxSize = it.second;
        }

        int count = 0;
        for (auto it : mp) {
            if (it.second == maxSize)
                count++;
        }

        return count;
    }
};
