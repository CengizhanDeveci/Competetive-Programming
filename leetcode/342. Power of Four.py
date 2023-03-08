class Solution:
    def isPowerOfFour(self, num: int) -> bool:
        if num < 1:
            return False
        else:
            return log(num,4).is_integer()
        