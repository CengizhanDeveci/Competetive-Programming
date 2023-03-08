class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        result = []
        a = 0
        for i in range(len(nums)):
            if i % 2 == 0:
                a = nums[i]
            else:
                while a > 0:
                    result.append(nums[i])
                    a -= 1                    
        return result
        