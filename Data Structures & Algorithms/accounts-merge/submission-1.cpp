class Solution {
public:
void merge(int group, int index, map<string,int>&mp , vector<vector<string>>&accounts){
    for(int i=1; i<accounts[index].size(); i++){

         string str=accounts[index][i];
        mp[str]=group;
    }
}

int findparent(int par, vector<int>&parent){
    if(par==parent[par]){
        return par;
    }
   return parent[par]=findparent(parent[par], parent);
}

void unionByrank(int u, int v, vector<int>&rank, vector<int>&parent){
    int u_par=findparent(u, parent);
    int v_par=findparent(v, parent);
    if(u_par==v_par){
        return;
    }

    if(rank[u_par]<rank[v_par]){
        parent[v_par]=u_par;
        rank[v_par]++;


    }
    else{
        parent[u_par]=v_par;
        rank[u_par]++;

    }

}
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        map<string, int>mp;
        vector<int>parent(accounts.size(), 0);
        vector<int>rank(accounts.size(), 0);
        for(int i=0; i<accounts.size(); i++){
            parent[i]=i;
        }
        for(int i=0; i<accounts.size(); i++){
            for(int j=1; j<accounts[i].size(); j++){
                string str=accounts[i][j];
                if(mp.find(str)==mp.end()){
                    //merge and exit
                    //int group=mp[str];
                    //merge(group, i, mp, accounts);
                    //break;
                    mp[str]=i;
                }
                else if(mp.find(str)!=mp.end()){
                    //parent[i]=mp[str];
                    unionByrank(i, mp[str], rank, parent);
                }
                
                    
                
            }
        }

        vector<vector<string>>ans(accounts.size());
       

        for(auto num: mp){
            int group=num.second;
            int par=findparent(group, parent);
            
            string str=num.first;
            //ans[group].push_back(accounts[group][0]);
            
            
            ans[par].push_back(str);



        }

        vector<vector<string>>res;
        for(int i=0; i<accounts.size(); i++){
            if(ans[i].size()==0){
                continue;
            }
            vector<string>temp;
           // temp.push_back()
            temp.push_back(accounts[i][0]);
            for(auto email: ans[i]){
                temp.push_back(email);
            }
            res.push_back(temp);

        }
        

        return res;


    }
};