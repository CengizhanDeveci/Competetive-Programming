class Solution:
    def isValid(self, s: str) -> bool:
        a = []
        if len(s) < 2:
            return False
        for i in s:
            if i == "(":
                a.append(i)
            elif i == "[":
                a.append(i)
            elif i == "{":
                a.append(i)
            elif i == "}":
                if a == []:
                    return False
                if a[-1] == "{":
                    a = a[:-1]
                else:
                    return False
            elif i == "]":
                if a == []:
                    return False
                if a[-1] == "[":
                    a = a[:-1]
                else:
                    return False
            elif i == ")":
                if a == []:
                    return False
                if a[-1] == "(":
                    a = a[:-1]
                else:
                    return False
        if a == []:
            return True
        else:
            return False
      