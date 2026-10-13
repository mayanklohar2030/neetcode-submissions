class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int, int>mp;
        int element=nums.size()/3;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;

            if(mp[nums[i]]>element){
                ans.push_back(nums[i]);
                mp[nums[i]]=-50000;
            }
        }
        return ans;
        
    }
};