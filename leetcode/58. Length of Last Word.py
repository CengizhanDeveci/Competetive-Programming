class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        result = 0
        s = s.strip()
        s = s[::-1]
        for i in s:
            if i == " ":
                return result
            else:
                result +=1
        return result