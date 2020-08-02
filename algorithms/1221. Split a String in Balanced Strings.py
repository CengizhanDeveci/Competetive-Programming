class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count = 0
        l = 0
        r = 0
        for i in range(len(s)):
            if(s[i] == "L"):
                l +=1
            else:
                r +=1
            if l == r:
                l = r = 0
                count += 1
        return count
            