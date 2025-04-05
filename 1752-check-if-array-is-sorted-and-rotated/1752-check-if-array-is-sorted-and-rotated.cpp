class Solution {
public:
    void reverseF(vector<int>& arr,int n,int m)
    {
     while(n<m)
     {
        swap(arr[n],arr[m]);
        n++;
        m--;
     }
    }

    bool check(vector<int>& nums) {
        int d=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])
            {
                d=i;
            }
        }
        if(d==-1)
        {
            return true;
        }
        int n=nums.size();
        reverseF(nums,0,d-1);
        reverseF(nums,d,n-1);
        reverseF(nums,0,n-1);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])
            {
                return false;
            }
        }
        return true;
    }
};