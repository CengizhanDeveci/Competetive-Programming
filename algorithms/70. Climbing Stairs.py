class Solution:
    def climbStairs(self, n: int) -> int:
        i = 1
        result = [1,1]
        while i < n:
            result.append(result[i-1] + result[i])
            i += 1
        return result[i]
            