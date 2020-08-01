class Solution:
    def myAtoi(self, string: str) -> int:
        s = string.split()
        if s == []:
            return 0
        number = s[0]
        if number == "-":
            return 0
        elif number =="+":
            return 0
        nums = []
        count = 0
        for i in range(10):
            nums.append(str(i))

        if number[0] == "-":
            if number[1] not in nums:
                return 0
            number = number.replace("-","")
            for i in number:
                if i in nums:
                    count += 1
                else:
                    break
            if int("-" + number[:count]) > -2**31:
                return int("-" + number[:count])
            else:
                return -2**31
        else:
            if number[0] == "+":
                if number[1] not in nums:
                    return 0
                number = number.replace("+","")
            for i in number:
                if i in nums:
                    count += 1
                else:
                    break
            if number[:count] == "":
                return 0
            else:
            
                if int(number[:count]) < 2**31-1:
                    return int(number[:count])
                else:
                    return 2**31-1    