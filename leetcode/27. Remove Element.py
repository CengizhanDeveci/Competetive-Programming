class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        b = 0
        a = len(nums)-1
        for i in range(len(nums)):
            if nums[b] == val:
                nums[b] = nums[a]
                a -= 1
            else:
                b +=1 
        return b