class Solution:
    def reverse(self, x: int) -> int:
        string = str(x)
        if string[0] == "-":
            if int("-" + string.replace("-","")[::-1]).bit_length() < 32:
                return int("-" + string.replace("-","")[::-1])
            else:
                return 0
        else:
            if int(string[::-1]).bit_length() < 32: 
                return int(string[::-1])
            else:
                return 0