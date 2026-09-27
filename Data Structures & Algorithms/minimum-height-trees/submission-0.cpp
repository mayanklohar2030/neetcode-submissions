class Solution {
public:
void bfs(vector<vector<int>>&adj, int &height, int index, vector<int>&visited){
    queue<pair<int, int>>q;
    q.push({index, 0});
    visited[index]=1;

    while(!q.empty()){
        auto pai= q.front();
         int node=pai.first;
         q.pop();
        //travesrse
        height=max(height, pai.second);
       int dist=pai.second;
        // int node=pai.firts;
    for(int i=0; i<adj[node].size(); i++){
        int neib=adj[node][i];
        if(visited[neib]==0) {
            q.push({neib, dist+1});
            visited[neib]=1;
        }

    }

    }

}
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
     vector<vector<int>>adj(n);
     for(int i=0; i<edges.size(); i++){
        int src=edges[i][0];
        int des=edges[i][1];

        adj[src].push_back(des);
        adj[des].push_back(src);
     }

     vector<int>ans(n);
     int mn=INT_MAX;

     for(int i=0; i<n; i++){
        int height=0;
        vector<int>visited(n, 0);
        bfs(adj, height, i, visited);
        mn=min(mn, height);
        ans[i]=height;
     }
     vector<int>res;
     for(int i=0; i<ans.size(); i++){
        if(mn==ans[i]){
            res.push_back(i);
        }

     }

     return res;



        
    }
};