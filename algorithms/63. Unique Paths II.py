class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        for i in range(len(obstacleGrid)):
            for j in range(len(obstacleGrid[0])):                    
                if i == 0:
                    if j == 0:
                        if(obstacleGrid[i][j] == 1):
                            return 0
                        else:
                            obstacleGrid[i][j] = 1
                    else:
                        if(obstacleGrid[i][j]):
                            obstacleGrid[i][j] = 0
                        else:
                            obstacleGrid[i][j] = obstacleGrid[i][j-1]
                else:
                    if(obstacleGrid[i][j]):
                        obstacleGrid[i][j] = 0
                    elif j == 0:
                        obstacleGrid[i][j] = obstacleGrid[i - 1][j]
                    else:
                        obstacleGrid[i][j] = obstacleGrid[i][j-1] + obstacleGrid[i - 1][j]
        return obstacleGrid[len(obstacleGrid) - 1][len(obstacleGrid[0])-1]       
    