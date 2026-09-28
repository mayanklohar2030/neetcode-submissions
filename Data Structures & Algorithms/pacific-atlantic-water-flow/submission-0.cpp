class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<bool>>pacific(heights.size(), vector<bool>(heights[0].size(), false));

        vector<vector<bool>>antlatic(heights.size(), vector<bool>(heights[0].size(), false));

        queue<pair<int, int>>q;
        queue<pair<int, int>>q1;

        for(int i=0; i<heights.size(); i++){
            // for(int j=0; j<heights[0].size(); j++){
            //     if(i==0 || j==0)
            // }
            pacific[i][0]=true;
            q.push({i, 0});
            //pacific[i][0]=true;
        }

        for(int i=0; i<heights[0].size(); i++){
            // for(int j=0; j<heights[0].size(); j++){
            //     if(i==0 || j==0)
            // }
            pacific[0][i]=true;
            q.push({0, i});
            //pacific[i][0]=true;
        }


        for(int i=0; i<heights[0].size(); i++){
           
            //antlatic[i][heights[0].size()-1]=true;
            q1.push({heights.size()-1, i});
            antlatic[heights.size()-1][i]=true;
        }
         for(int i=0; i<heights.size(); i++){
           
            //antlatic[i][heights[0].size()-1]=true;
            q1.push({i, heights[i].size()-1});
            antlatic[i][heights[i].size()-1]=true;
        }


    // queue<pair<int, int>>q;
    // queue<pair<int, int>>q1;
    //q.push({0,1});
    int m=heights.size();
    int n= heights[0].size();

    int c[4]={-1, 1, 0, 0};
    int r[4]={0, 0, -1, 1};


    while(!q.empty()){
        auto pai=q.front();
        q.pop();
        //pacific[pai.first][pai.second]=true;
        for(int k=0; k<4; k++){
        int row=pai.first+ r[k];
        int col= pai.second+ c[k];

        if(row<m && row>=0 && col<n && col>=0 && pacific[row][col]==false &&      heights[row][col]>= heights[pai.first][pai.second]){
            q.push({row, col});
            pacific[row][col]=true;

        }

        }

        
    }

    /////////

     while(!q1.empty()){
        auto pai=q1.front();
        q1.pop();
        //pacific[pai.first][pai.second]=true;
        for(int k=0; k<4; k++){
        int row=pai.first+ r[k];
        int col= pai.second+ c[k];

        if(row<m && row>=0 && col<n && col>=0 && antlatic[row][col]==false &&      heights[row][col]>= heights[pai.first][pai.second]){
            q1.push({row, col});
            antlatic[row][col]=true;

        }

        }

        
    }

    vector<vector<int>>ans;
    for(int i=0; i<pacific.size(); i++){
        for(int j=0; j<pacific[0].size(); j++){
            if(pacific[i][j]==true && antlatic[i][j]==true){
                ans.push_back({i, j});
            }
        }
    }

    return ans;


        
    }
};
