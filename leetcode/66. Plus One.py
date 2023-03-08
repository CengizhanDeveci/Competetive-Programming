class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        length = len(digits)-1
        digits[length] += 1
        while digits[length] == 10:
            digits[length] = 0
            
            
            if length ==0:
                digits.insert(0,1)
            else:
                digits[length-1] +=1
                length -=1
        return digits