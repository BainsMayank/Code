class Solution {
private:
    void dfs(int i,int j, vector<vector<bool>>& visited, vector<vector<int>>& grid){
        if(i<0 || i>= grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == 0 || visited[i][j]){
            return;
        }
        visited[i][j] = true;
        dfs(i-1,j,visited,grid);
        dfs(i+1,j,visited,grid);
        dfs(i,j+1,visited,grid);
        dfs(i,j-1,visited,grid);
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int row = 0;
        for(int i=0;i<grid[0].size();i++){
            dfs(row,i,visited,grid);
        }
        row = grid.size()-1;
        for(int i=0;i<grid[0].size();i++){
            dfs(row,i,visited,grid);
        }
        int col = 0;
        for(int i=0;i<grid.size();i++){
            dfs(i,col,visited,grid);
        }
        col = grid[0].size()-1;
        for(int i=0;i<grid.size();i++){
            dfs(i,col,visited,grid);
        }
        int count = 0;
        for(int i=0;i<visited.size();i++){
            for(int j=0;j<visited[0].size();j++){
                if(!visited[i][j] && grid[i][j] == 1){
                    count++;
                }
            }
        }
        return count;
    }
};