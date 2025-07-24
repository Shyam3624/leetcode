class Solution(object):
    def longestPalindrome(self, s):
        n=len(s)
        res=''
        maxs=0
        
        for i in range(n):
                for j in range(i+1,n+1):
                    sub=s[i:j]
                    if sub==sub[::-1] and maxs<=len(s[i:j]):
                        maxs=len(s[i:j])
                        res=s[i:j]
        return res


        