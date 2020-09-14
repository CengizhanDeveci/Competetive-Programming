class Solution:
    def isUgly(self, num: int) -> bool:
        while True:
            if num == 1:
                return True
            elif num < 1:
                return False
            elif num % 2 == 0:
                num = num//2
            elif num % 3 == 0:
                num = num // 3
            elif num % 5 ==0:
                num = num//5
            else:
                return False
            