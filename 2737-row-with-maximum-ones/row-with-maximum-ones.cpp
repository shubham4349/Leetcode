class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m= mat[0].size();

        int maxcount=0;
        int ansIdx;

        for(int i=0; i<n; i++){   
            int count=0;
            for(int j=0; j<m; j++){
              if(mat[i][j]==1) count++;
              if(count>maxcount){
                maxcount=count;
                ansIdx=i;
              }
            }
        }
        if(maxcount==0) return {0,0};
        return {ansIdx,maxcount};
    }
};