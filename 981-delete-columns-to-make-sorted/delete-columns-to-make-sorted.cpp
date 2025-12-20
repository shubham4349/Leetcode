class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
       int n=strs.size();
       int m=strs[0].size();
       int cnt=0;
       for(int j=0; j<m; j++){ // col traversal
           for(int i=0; i<n-1; i++){ // row
               char ch1=strs[i][j];
               char ch2=strs[i+1][j];
               if(ch1>ch2){
                cnt++; // agar ek bhi case milgya then pure coln ko skip krdo, aage same col check krne ki jarurat nhi
                break;
               }
               
           }
       }
       return cnt;
    }
};
