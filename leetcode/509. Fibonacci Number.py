class Solution:
    def fib(self, N: int) -> int:
        if N == 0:
            return 0
        if N == 1:
            return 1
        i = 0
        prev = 1
        prev2 = 0
        count = 0
        while count < N-1:
            i = prev + prev2
            prev2 = prev
            prev = i
            count += 1
        return i
            