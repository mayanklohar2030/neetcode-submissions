class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=INT_MAX;
        int sum=0;

        // for(int i=0; i<nums.size(); i++){
        //     int sum=0;
        //     int j=i;

        //     while(j<nums.size() && sum+nums[j]<target){
        //         sum=sum+nums[j];
        //         j++;
        //     }
        //     if(j<nums.size())
        //     len=min(len, j-i+1);
        // }
        // if(len==INT_MAX){
        //     return 0;
        // }
        // return len;
        
        int i=0;
        int j=0;
        while(i<nums.size()){
            sum=sum+nums[i];

            while(sum>=target){
                sum=sum-nums[j];
                len=min(len, i-j+1);
                j++;
                
            }
            i++;
        }
        if(len==INT_MAX){
            return 0;
        }
        return len;


    }
};