class Solution:
    def isPalindrome(self, x: int) -> bool:
        length = len(str(x))
        if int(x) < 0:
            return False
        elif x >= 0 and x < 10:
            return True
        else:
            for i in range(0,length//2):
                if str(x)[i] == str(x)[::-1][i]:
                    if i == length//2 - 1:
                        return True
                else:
                    return False
                    break
