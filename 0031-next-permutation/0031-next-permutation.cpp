class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: find first index i such that nums[i] < nums[i+1]
    while (i >= 0 && nums[i] >= nums[i+1]) i--;

    if (i >= 0) {
        // Step 2: find element just bigger than nums[i]
        int j = n - 1;
        while (nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }

    // Step 3: reverse from i+1 to end
    reverse(nums.begin() + i + 1, nums.end());for(int x:nums)
       cout<<x;
    }
};