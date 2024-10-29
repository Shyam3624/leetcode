class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        a=0
        cs=0
        b=len(numbers)-1
        while a<b:
            cs=numbers[a]+numbers[b]
            if cs==target:
                return [a+1,b+1]
            elif cs<target:
                a+=1
            else:
                b-=1
        return []
                
        