class Solution(object):
    def threeSumClosest(self, nums, target):
        nums.sort()
        n = len(nums)
        closest_sum = float('inf')  # start with infinity
        for i in range(n - 2):
            left, right = i + 1, n - 1
            while left < right:
                curr_sum = nums[i] + nums[left] + nums[right]
                # Update closest if this is nearer
                if abs(curr_sum - target) < abs(closest_sum - target):
                    closest_sum = curr_sum
                if curr_sum == target:
                    return curr_sum  # exact match
                elif curr_sum < target:
                   left += 1
                else:
                   right -= 1
        return closest_sum
                
            
       