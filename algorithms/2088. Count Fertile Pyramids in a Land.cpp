class Solution {
public:
    int countPyramids(vector<vector<int>>& grid) {
        int res = 0;
        for(int i = grid.size() - 2; i >= 0; i--){
            for(int j = 1; j < grid[0].size() - 1; j++){
                if(grid[i][j]){
                    grid[i][j] = min(grid[i+1][j-1],min(grid[i+1][j],grid[i+1][j+1])) + 1;
                }
            }
        }
        
        for(int i = 0; i <= grid.size() - 1; i++){
            for(int j = 1; j < grid[0].size() - 1; j++){
                if(grid[i][j]){
                    res += (grid[i][j] - 1);
                    grid[i][j] = 1;
                }
            }
        }
        
        for(int i = 1; i <= grid.size() - 1; i++){
            for(int j = 1; j < grid[0].size() - 1; j++){
                if(grid[i][j]){
                    grid[i][j] = min(grid[i-1][j-1],min(grid[i-1][j],grid[i-1][j+1])) + 1;
                }
            }
        }
                
        for(int i = grid.size() - 1; i > 0; i--){
            for(int j = 1; j < grid[0].size() - 1; j++){
                if(grid[i][j]){
                    res += (grid[i][j] - 1);
                }
            }
        }
        return res;
    }
};