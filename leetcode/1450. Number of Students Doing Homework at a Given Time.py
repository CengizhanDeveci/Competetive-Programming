class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        student = len(startTime)
        result = 0
        while student > 0:
            if startTime[student-1]<=queryTime and endTime[student-1]>=queryTime:
                result += 1
            student -= 1
        return result