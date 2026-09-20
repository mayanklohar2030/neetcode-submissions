class Solution {
public:

void dfs(int i, int j, int n, int m, vector<vector<int>>&grid, int &count){
    if(i<0 || j<0 || i>=m || j>=n){
        return;
    }
    grid[i][j]=2;

    int r[4]={1,-1,0,0};
    int c[4]={0, 0, 1, -1};
    int row;
    int col;
    for(int k=0; k<4; k++){
        row=i+r[k];
        col=j+c[k];
        if(row< 0 || col<0 || row>=m || col>=n || grid[row][col]==0){
            count++;
        }

        if(row>=0 && row<m && col>=0 && col<n && grid[row][col]==1){
            dfs(row, col, n, m ,grid, count);
        }
    }
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m= grid.size();
        int count=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j]==1){
                    dfs(i, j, n, m, grid, count);
                }
            }
        }

        return count;
        
    }
};