class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){

            mp[nums[i]]++;
            // if(mp[nums[i]]>=k){
            //     ans.push_back(nums[i]);
            //     mp[nums[i]]=-100000;

            // }

        }

        //vector<int>track(nums.size()+1, vector<int>());
        vector<vector<int>>track(nums.size()+1);
        for(auto nums: mp){

            int freq = nums.second;

            int num=nums.first;

            track[freq].push_back(num);


        }
       int i=nums.size();
        while(k>0 && i>0){
            if(track[i].size()>0){
                int j=0;
                while(j<track[i].size()){
                ans.push_back(track[i][j]);
                j++;
                k--;
                }
                //k--;
            }
            i--;

        }
        return ans;

        //int check=nums.size();

        // while(k>0){
        //     if(mp.find(check)!=mp.end()){
        //         k--;
        //         ans.push_back(mp[check]);
        //     }
        // }
        // for(auto num:mp){

        // }


        return ans;
        
    }
};
