class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int start=0;
        int end=arr.size()-1;
        int pos=arr.size();

        while(start<=end){
            int mid=(start+end)/2;
            

            if(arr[mid]<=x){
                start=mid+1;
              //  pos=mid;

            }
            else{
             end=mid-1;
             pos=mid;
            }
        }
         vector<int>ans;
       
        int i=pos-1;
        int j=pos;
        // vector<int>ans;

        while( k>0 && i>=0 && j<arr.size()){
            int a=abs(arr[i]-x);

            int b=abs(arr[j]-x);
            //int c=


            if(a==b){
                //ans.push_back(arr[i]);
                i--;

            }
            else if(a<b){
                //ans.push_back(arr[i]);
                i--;
            }
            else{
               // ans.push_back(arr[j]);
                j++;
            }
            k--;
            
        }
        while(k>0 && i>=0){
             //ans.push_back(arr[i]);
                i--;
                k--;


        }
        while(k>0 && j<arr.size()){
             //ans.push_back(arr[j]);
                j++;
                k--;


        }

        for(int p=i+1; p<j; p++){
            ans.push_back(arr[p]);

        }
        return ans;
        

        
    }
};