class Solution {
public:
bool substring (string s1, string s2){
    int i=0;
    int j=0;

    while( i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            i++;
            j++;

        }
        else{
            i++;
        }
    }
    return j==s2.size();
}
    bool isAlienSorted(vector<string>& words, string order) {
        int arr[26];
        int count=0;
        for(auto e: order){
            arr[e-'a']= count;
            count++;
        }

        for(int i=1; i<words.size(); i++){
            string str1=words[i-1];
            string str2= words[i];

            int k=0;
            int j=0;
            //  if(str1.size()>str2.size() && str1.find(str2) != string::npos){
            //         return false;
            //     }
            while(k<str1.size() && j<str2.size()){
                if(str1[k]==str2[j]){
                    k++;
                    j++;
                    continue;
                }
                // if(str1.size()>str2.size()){
                //     return false;
                // }
                if(str1[k]!=str2[j] && arr[str1[k]-'a']> arr[str2[j]-'a']){
                    return false;
                }
                else{
                    break;
                }
                // if(str1.size()>str2.size() && str1.find(str2) != string::npos){
                //     return false;
                // }
                //  if(k<str1.size()){
                //     return false;
                // }
                k++;
                j++;

                // if(k<str1.size()){
                //     return false;
                // }
            }
             if (j == str2.size() && str1.size() > str2.size())
             return false;
            

        }

        return true;
        
    }
};