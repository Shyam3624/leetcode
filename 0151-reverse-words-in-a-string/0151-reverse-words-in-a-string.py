class Solution:
    def reverseWords(self, s: str) -> str:
        rev=[]
        res=''
        
        for j in s:
                if j!=' ':
                    res+=j
                else:
                    if res:
                      rev.append(res)
                      res=''
        if res:
            rev.append(res)
        j=0
        result=''
        
        for i in range(len(rev)-1,-1,-1):
            a=rev[i]
            if i!=len(rev)-1:
              result+=' '
            result+=a
            
        return result
s='the sky is blue'
ob=Solution()
print(ob.reverseWords(s))



