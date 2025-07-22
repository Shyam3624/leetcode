class Solution(object):
    def maximumUniqueSubarray(self, nums):
        seen=set()
        max_sum=0
        j=0
        curr_sum=0
        for i in range(len(nums)):
            while nums[i] in seen:
                seen.remove(nums[j])
                curr_sum-=nums[j]
                j+=1
            seen.add(nums[i])
            curr_sum+=nums[i]
            max_sum=max(max_sum,curr_sum)
        return max_sum
        