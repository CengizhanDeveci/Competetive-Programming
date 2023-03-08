class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        i = 0
        if nums == []:
            return False
        nums.sort()
        old = nums[0]
        for i in range(1,len(nums)):
            if old == nums[i]:
                return True
            else:
                old = nums[i]
        else:
            return False
        