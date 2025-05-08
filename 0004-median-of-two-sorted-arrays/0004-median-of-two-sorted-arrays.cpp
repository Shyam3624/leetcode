#include<algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> res=nums1;
            res.insert(res.end(),nums2.begin(),nums2.end());
            sort(res.begin(),res.end());
            if(res.size()%2==1)
            {
                return res[res.size()/2];

            }
            else
            {
                return (res[(res.size()/2)-1]+res[res.size()/2])/2.0;
            }
        
    }
};