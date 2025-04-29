class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> arr(r*c);
        int idx = 0;

        for(int i =0; i<r; i++){
            for(int j=0; j<c; j++){
               arr[idx] = matrix[i][j];
               idx++;
            }

        }
        sort(arr.begin(), arr.end());
        return arr[k-1];
    }
};