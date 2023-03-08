class Solution:
    def countAndSay(self, n: int) -> str:
        result = "1"        
        while (n > 1): 
            a = ""
            i = 0
            while i < len(result):
                counter = 1
                while i + 1 < len(result) and result[i] == result [i+1]:
                    counter += 1
                    i += 1
                a += (str(counter) + str(result[i]))
                i += 1
            n -= 1
            result = a
        return result
            
        