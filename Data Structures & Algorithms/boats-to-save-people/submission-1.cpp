class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(), nums.end());
         int ans=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            
            if(nums[i]+nums[j]<=limit){
                i++;
                j--;
                ans++;
            }
            else {
                ans++;
                j--;
            }
        }
        if(i==j){
            ans++;
        }
        return ans;

        // int i=0;
        // int sum=0;
        // int ans=0;
        // while(i<nums.size()){

        //     int j=i;
        //     int sum=0;
        //     while(j<i+2 && j<nums.size()){
        //         sum=sum+nums[j];
        //         j++;
        //     }
        //     if(sum<=limit){
        //         i=j;
        //         ans++;
        //     }
        //     else {
        //         i++;
        //         ans++;
        //     }
        //     // sum=sum+nums[i];

        //     // if(sum==limit){
        //     //      //sum=sum+nums[i];
        //     //      ans++;
        //     //      sum=0;
        //     // }
        //     // else if(sum>limit){

        //     // }
        // }

        // if(nums[i]+nums[i-1]>limit){
            
        // }
        // return ans;
        
    }
};