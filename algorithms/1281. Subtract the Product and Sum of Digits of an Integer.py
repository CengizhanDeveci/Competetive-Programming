class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s = str(n)
        pro = 1
        sm = 0
        for i in s:
            pro *= int(i)
            sm += int(i)    
        return pro - sm
    