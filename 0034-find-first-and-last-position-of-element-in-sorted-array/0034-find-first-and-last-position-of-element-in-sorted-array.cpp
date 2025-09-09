class Solution {
public:
    int firstpos(vector<int>& nums,int l,int r,int target)
    {
        int idx=-1;
        while(l<=r)
        {
        int mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
         idx=mid;
         r=mid-1;
        }
        else if(nums[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        }
        return idx;
    }
    int lastpos(vector<int>& nums,int l,int r,int target)
    {
        int idx=-1;
        while(l<=r)
        {
        int mid=l+(r-l)/2;
        if(nums[mid]==target)
        {
         idx=mid;
         l=mid+1;
        }
        else if(nums[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        }
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fp,lp;
        int l=0,r=nums.size()-1;
        fp=firstpos(nums,l,r,target);
        lp=lastpos(nums,l,r,target);
        return {fp,lp};
    }
};