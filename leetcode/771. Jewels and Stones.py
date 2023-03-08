class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        stoneNumber = 0
        for i in J:
            for j in S:
                if i == j:
                    stoneNumber += 1
        return stoneNumber   