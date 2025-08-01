class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Approahc is correct but getting runtime due to not initializing row and col, cant initilaise col as its variable
        // vector<vector<int>> ans;
        // ans[0][0]=1;
        // ans[1][0]=ans[1][1]=1;
        // for(int i=2; i<numRows; i++){
        //     for(int j=0; j<=i; j++){
        //          ans[i][j]= ans[i-1][j-1]+ans[i-1][j];
        //     }
        // }
        // return ans;

         vector<vector<int>> ans;

         for(int i=0; i<numRows; i++){
            vector<int> row(i+1,1);  // initialzing row with i+1 col
            for(int j=1; j<i; j++){ // pehla aur last element ko change nhi kr rhe
                 row[j]= ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(row);
        }
        return ans;
        

    }
};