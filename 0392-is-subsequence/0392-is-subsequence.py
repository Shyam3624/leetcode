class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
            a=0
            b=0
            '''if s=="" and t=="":
                return True
            elif s=='':
                return True
            elif t=='':
                return False
            st=''
            for i in range(0,len(s)):
                if s[i] not in st:
                    st+=s[i]
            for i in range(0,len(t)):
                for j in st:
                    for i in range(0,len(t)):
                        if j==t[i]:
                            if i>=a:
                                b+=1
                            else:
                                return False
                            a=i
                if b==len(st):
                    return True
                else:
                    return False'''
            while a<len(s) and b<len(t):
                if s[a]==t[b]:
                    a+=1
                b+=1
            return a==len(s)


                   
                

        