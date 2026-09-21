class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {


        queue<pair<int, int>>q;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==0){
                    q.push({i, j});
                }
            }
        }
        //q.push({0,0});
        int r[4]={1, -1, 0, 0};
        int c[4]={0,0,1, -1};
        while(!q.empty()){
            auto node=q.front();
            int row;
            int col;
            q.pop();

            for(int k=0; k<4; k++){
                row=node.first+r[k];
                col=node.second+c[k];

                if(row<grid.size() && row>=0 && col<grid[0].size() && col>=0 && grid[row][col]==2147483647){
                    grid[row][col]=1+grid[node.first][node.second];
                    q.push({row, col});
                }
            }

        }



        // for(int i=0; i<grid.size(); i++){
        //     for(int j=0; j<grid[0].size(); j++){
        //         if(grid[i][j]==0){
        //             q.push({i, j});
        //         }
        //     }
        // }
        
    }
};
