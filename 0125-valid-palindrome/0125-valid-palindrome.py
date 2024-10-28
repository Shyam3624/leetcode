class Solution:
    def isPalindrome(self, s: str) -> bool:
        st=''
        for i in s:
            if i.isalpha():
                st+=i
            elif i.isdigit():
                st+=i
        st1=st.lower()
        a=len(st1)
        st2=''
        for j in range(a-1,-1,-1):
            st2+=st1[j]
        if st1==st2:
            return True
        else:
            return False
m=Solution()
s="A man, a plan, a canal: Panama"
print(m.isPalindrome(s))



        