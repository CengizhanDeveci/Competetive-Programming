class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        length = len(s)
        count = 0
        while count< len(s):
            s.insert(length,s[0])
            s.remove(s[0])
            count +=1
            length -= 1
        