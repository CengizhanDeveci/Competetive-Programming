class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        n = len(points)
        i = 0
        move = 0
        while i < n-1:
            move += max(abs(points[i][0] - points[i+1][0]),abs(points[i][1]-points[i+1][1])) 
            i+=1
        return move