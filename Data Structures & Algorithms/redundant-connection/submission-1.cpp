class Solution {
public: 
bool bfs(vector<vector<int>>&adj ){
    queue<pair<int, int>>q;
     vector<int>visited(1001, 0);

    for(int i=0; i<adj.size(); i++){
        if(visited[i]==1){
            continue;
        }
        q.push({i, -1});
        visited[i]=1;
    
    // q.push({0, -1});
    //  vector<int>visited(1001, 0);

     visited[0]=1;


    while(!q.empty()){
        auto el = q.front();
        //visited[.first]=1;
        int parent= el.second;
        int node=el.first;
        q.pop();

        for(int i=0; i<adj[node].size(); i++){
            int neib=adj[node][i];
            
             if(parent==neib){
                continue;
                
            }
            else if(visited[neib] == 1){
               // visited[nw_el]=1;
                //q.push({nw_el, el.first});
                return true;
            }
            else{
                visited[neib]=1;
                q.push({neib, node});
            }
        }

       // visited
       // return false;

    }


    }
     return false;

}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        vector<vector<int>>adj(1001);
       // int index=edges[0][0];
        //vector<int>visited(1001, 0);
        for(int i=0; i<edges.size(); i++){
            
            int src= edges[i][0]-1;
            int des=edges[i][1]-1;

            adj[src].push_back(des);
            adj[des].push_back(src);


            if(bfs(adj)==true){
                return edges[i];
            }

        }

        return edges[edges.size()-1];

        
    }
};
