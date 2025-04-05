class Solution {
public:
    void rotate(vector<int>& nums,int k) {
        vector<int> temp;
        int n=nums.size();
        k=k%n;
        if(k==0)return;
        for(int i=0;i<(n-k);i++)
        {
            temp.push_back(nums[i]);
        }
        for(int j=n-k;j<n;j++)
        {
            nums[j-(n-k)]=nums[j];
        }
        for(int p=k;p<n;p++)
        {
            nums[p]=temp[p-k];
        }
        
    }
};