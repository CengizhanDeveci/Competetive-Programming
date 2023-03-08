class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        a = 0
        while True:
            if a in nums:
                a += 1
            else:
                return a
            