class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        while True:
            if nums.count(nums[0]) > len(nums) / 2:
                return nums[0]
            else:
                a = nums[0]
                while a in nums: nums.remove(a)
                    
