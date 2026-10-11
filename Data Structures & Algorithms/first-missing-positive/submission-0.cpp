class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;

        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }

        int el=1;
        while(!st.empty()){
            if(st.count(el)){
                el=el+1;
            }
            else{
                return el;
            }
        }
        return el;
        
    }
};