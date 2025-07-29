class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        int a = A.size();
        int b = B.size();
        
        set<int> seen;
        vector<int> ans(a,0);
        int cnt=0;
        for(int i=0; i<a; i++){
          
           if(seen.count(A[i])) cnt++;
           else seen.insert(A[i]);

           if(seen.count(B[i])) cnt++;
           else seen.insert(B[i]);
           
           ans[i]=cnt;
           
        }
        return ans;

       
    }
};