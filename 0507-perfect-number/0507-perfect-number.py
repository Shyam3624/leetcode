class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        sum1=0
        if num==1:
            return False
        for i in range(1,int(num**0.5)+1):
            if num%i==0:
                sum1+=i
                if i!=1 and i!=num//i:
                    sum1+=num//i
        if sum1==num:
            return True
        return False