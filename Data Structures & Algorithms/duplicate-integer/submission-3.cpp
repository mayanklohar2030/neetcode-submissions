class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //  int mx=INT_MIN;
        // for(int i=0; i<nums.size(); i++){
        //    if(nums[i]>mx){
        //     mx=nums[i];
        //    }
        // }
       set<int>s;
        //vector<int>visited(mx+1, 0);
        for(int i=0; i<nums.size(); i++){
           if(s.count(nums[i])){
            return true;
           }
           s.insert(nums[i]);
            
        }
        return false;
        
    }
};