class Solution(object):
    def myAtoi(self, s):
        num=0
        s=s.lstrip()
        sign=1
        if not s:
            return 0
        if s[0] in ['+','-']:
            if s[0]=='-':
              sign=-1
            s=s[1::]
        for i in s:
            if not i.isdigit():
                break
            num=num*10+int(i)
        num=num*sign
        INT_MIN,INT_MAX=-2**31,2**31-1
        if num<INT_MIN:
            return INT_MIN
        if num>INT_MAX:
            return INT_MAX
        return  num





        