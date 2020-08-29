class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        while True:
            if n == 1:
                return True
            elif n < 1:
                return False
            elif n % 2 == 0:
                n /= 2
            else:
                return False
        