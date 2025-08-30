#include<algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> res=nums1;
            double n=0;
            res.insert(res.end(),nums2.begin(),nums2.end());
            int m=res.size();
            sort(res.begin(),res.end());
            if(m%2==0)
            {
                n=(res[m/2]+res[(m/2)-1])/2.0;
                return n;
            }
            else
            {
                n=res[(m/2)];
                return n;
            }
            return n;
    }
};