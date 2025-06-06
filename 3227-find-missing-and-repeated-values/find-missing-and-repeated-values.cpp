class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int row = grid.size();
        int col= grid[0].size();

        vector<int> temp; // flattening the matrix

        for(int i =0; i<row; i++){
            for(int j=0; j<col; j++){
                temp.push_back(grid[i][j]);
            }
        }
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i =0; i<temp.size(); i++){
            mp[temp[i]]++;
            if(mp[temp[i]]==2) ans.push_back(temp[i]); // repeated val done!
        }
       int curr_sum=0;
        for(int i=0; i<temp.size(); i++){
             curr_sum += temp[i];
        }
        curr_sum -= ans[0]; // minus that repeated val

       int to_be_sum=0;
       for(int i =1; i<=temp.size(); i++){
         to_be_sum += i;
       }

       int missing = to_be_sum - curr_sum;
       ans.push_back(missing);

       return ans;
      
    }
};