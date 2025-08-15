class Solution(object):
    def isPalindrome(self, x):
        num=x
        res=0
        while num>0:
            rem=num%10
            res=(res*10)+rem
            num=num//10
        if res==x:
            return True
        return False

        """
        :type x: int
        :rtype: bool
        """
        