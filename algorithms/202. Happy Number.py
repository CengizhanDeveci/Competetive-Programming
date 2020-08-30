class Solution:
    def isHappy(self, n: int) -> bool:
        b = [f"{n}"]
        while True:
            a = 0
            for i in b[-1]:
                a = a + (int(i) ** 2)
            if a == 1:
                return True
            elif str(a) in b:
                return False
            else:
                b.append(f"{a}")
                
