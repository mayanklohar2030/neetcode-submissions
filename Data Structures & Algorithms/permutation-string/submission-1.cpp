class Solution {
public:
bool check(vector<int>&visited, vector<int>&visited1){
    for(int i=0; i<26; i++){
        if(visited1[i]!=visited[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size()){
            return false;
        }

        vector<int>visited(26, 0);
        for(int i=0; i<s1.size(); i++){
            visited[s1[i]-'a']++;
        }

        vector<int>visited1(26, 0);
        for(int i=0; i<s2.size(); i++){
            bool ans=false;

            if(i>=s1.size()){
                ans=check(visited, visited1);
                visited1[s2[i-s1.size()]-'a']--;
                //visited1[s2[i]-'a']=1;
                //continue;


            }

            if(ans){
                return true;
            }

            visited1[s2[i]-'a']++;     
         }

         return check(visited, visited1);

         

         return false;
    }
};
