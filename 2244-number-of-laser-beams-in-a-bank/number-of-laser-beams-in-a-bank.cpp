class Solution {
public: 
    int deviceRow(string b){
          for(char ch:b){
             if(ch=='1') return true;
          }
          return false; // mtlb device nhi h
    }
    int numberOfBeams(vector<string>& bank) {
        // empty row ko hi delete krde matrix se
         int r=bank.size();
        vector<string> mat;
        for(int i=0; i<r; i++){
            if(deviceRow(bank[i])) mat.push_back(bank[i]);
        }
        if(mat.size()<2) return 0;
        //  int cnt=0;
         int ans=0;
         for(int i=0; i<mat.size()-1;i++){     
            int l1=0,l2=0;
            for(int j=0; j<mat[0].size();j++){
               if( mat[i][j]=='1') l1++;
               if(mat[i+1][j]=='1') l2++;
             }
            ans+=l1*l2;
         }
         return ans;     
    }
};