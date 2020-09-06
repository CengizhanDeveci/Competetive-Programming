# My First Solution

class Solution:
    def intToRoman(self, num: int) -> str:
        dic = {
            1000 : 'M',
            900 : 'CM',
            500 : 'D',
            400 : 'CD',
            100 : 'C',
            90 : 'XC',
            50 : 'L',
            40 : 'XL',
            10 : 'X',
            9 : 'IX',
            5 : 'V',
            4 : 'IV',
            1 : 'I'
        }        
        result = ""        
        for div, roman in dic.items():
            result += roman * (num // div)
            num -= (div * (num//div))
            
        return result
            


# My Second Solution

class Solution:
    def intToRoman(self, num: int) -> str:
        res = ""
        while num != 0:
            if num / 1000 >= 1:
                res += "M" * (num // 1000)
                num -= (1000 * (num // 1000))
            if num // 100 == 9:
                res += "CM"
                num -= 900
            if num // 500 == 1:
                res += "D"
                num -= 500
            if num // 100 == 4:
                res += "CD"
                num -= 400
            if num // 100 >= 1:
                res += "C" * (num // 100)
                num -= (100 * (num//100))
            if num // 10 == 9:
                res += "XC"
                num -= 90
            if num // 50 == 1:
                res += "L"
                num -= 50
            if num // 10 == 4:
                res += "XL"
                num -= 40
            if num // 10 >= 1:
                res += "X" * (num//10)
                num -= (10 * (num//10))
            if num == 9:
                res += "IX"
                num -= 9
            if num == 4:
                res += "IV"
                num -= 4
            if num >= 5:
                res += "V"
                num -= 5
            if num != 0:
                res += "I" * num
                num = 0
        
        return res