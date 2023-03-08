class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target in nums:
            return nums.index(target)
        else:
            length = len(nums)
            i = 0
            if target>nums[length-1]:
                return length
            elif target<nums[0]:
                return 0
            else:
                while i<length-1:
                    if nums[i]<target and nums[i+1]>target:
                        return i+1
                    else:
                        i+=1
                        