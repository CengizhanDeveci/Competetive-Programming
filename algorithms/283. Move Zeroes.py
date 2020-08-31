class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        changed = True
        while changed:
            changed = False
            for i in range(len(nums)):
                if i < len(nums) -1 and nums[i] == 0 and nums[i+1] != 0:
                    nums.append(0)
                    nums.pop(i)
                    changed = True
            