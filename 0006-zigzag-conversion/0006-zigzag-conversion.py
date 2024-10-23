class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        if numRows==1:
            return s
        rows=['']*min(numRows,len(s))
        currentRow=0
        goingdown=False
        for char in s:            
            rows[currentRow]+=char
            if currentRow==0 or currentRow==numRows-1:
                goingdown=not goingdown
            currentRow+=1 if goingdown else -1
        return ''.join(rows)
s="PAYPALISHIRING"
ob=Solution()
numRows=3
print(ob.convert(s,numRows))
            
        