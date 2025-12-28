class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(auto &g:grid){
            for(int j=0; j<grid[0].size(); j++){
                if(g[j]<0) cnt++;
            }
        }
        return cnt;
       
        
    }
};