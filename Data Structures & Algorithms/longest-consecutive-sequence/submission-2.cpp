class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }

        set<int>st;
        for(auto num: nums){
            st.insert(num);
        }
        int count=0;
        int longest=1;
        for(auto num: st){
            count=0;
            if(st.find(num-1)==st.end()){
                count++;
                int x=num+1;
                while(st.find(x)!=st.end()){
                    x=x+1;
                    count++;

                }

                longest=max(longest, count);

            }
        }
        // unordered_map<int, int>mp;
        // int count=1;
        // mp[nums[0]]=1;
        // int length=0;

        // for(int i=1; i<nums.size(); i++){
        //     int el=mp[nums[i]];

        //      //mp[nums[i]]=1;
        //     el=el-1;
        //     if(mp.find(el-1)!=mp.end()){
        //         mp[el-1]++;
        //     }
        //     else if(mp.find(nums[i])!=mp.end()){
                
        //     }
        //     else{

        //      mp[nums[i]]++;
        //     }


        // }

        // for(auto num: mp){
        //     if(num.second>count){
        //         count=num.second;
        //     }
        // }

         return longest;
        
    }
};
