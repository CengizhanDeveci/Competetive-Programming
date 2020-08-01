class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        number = []
        for i in nums:
            if i not in number:
                number.append(i)
            else:
                number.remove(i)
        return number[0]
        