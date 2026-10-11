class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       bool flag=0;
       //int mx=INT_MIN;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            flag=1;
            //break;
        }

        if(nums[i]<=0){
            nums[i]=1;
        }
        if(nums[i]>nums.size()){
            nums[i]=1;
        }

       // mx=max(mx, nums[i]);


       }
       if(flag==0){
        return 1;
       }


       for(int i=0; i<nums.size(); i++){
        int el=abs(nums[i]);
        if(nums[el-1]>0){
            nums[el-1]=-nums[el-1];
        }


        //it is very complex..
        // int check=nums[i];
        // int j=i;
        //  while(j>=0 && j!=check){
        //     int el=nums[check-1];
        //    nums[check-1] =check;
        //    check=el;
        //    j=check;

        //  }
       }

       for(int i=0; i<nums.size(); i++){
         if(nums[i]>0){
            return i+1;
         }
       }

       return nums.size()+1;

        // unordered_set<int>st;

        // for(int i=0; i<nums.size(); i++){
        //     st.insert(nums[i]);
        // }

        // int el=1;
        // while(!st.empty()){
        //     if(st.count(el)){
        //         el=el+1;
        //     }
        //     else{
        //         return el;
        //     }
        // }
        // return el;
        
    }
};