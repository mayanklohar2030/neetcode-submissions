class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>>pq;
//vector<int>arr;
//priority_queue<int>pq;
int k;
    KthLargest(int k, vector<int>& nums) {
        //arr=nums;
        //pq(arr.begin(), arr.end());
        // pq(nums.begin(), nums.end());
         this->k=k;

         for(auto num: nums){
             pq.push(num);
            if(pq.size()>k){
                pq.pop();
            //pq.push(num);
            }
            // pq.push(num);
         }
        
    }
    
    int add(int val) {
         pq.push(val);
        if(pq.size()>k){
            pq.pop();
            //  pq.push(val);
        }
        return pq.top();

        //pq.push(val);
        //int count=0;
        // k=k-1;
        // while(count!=k){
        //     count++;

        // }
        // return arr[count];
        //return pq.top();
        
    }
};
