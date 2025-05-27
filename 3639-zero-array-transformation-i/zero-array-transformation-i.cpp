class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
     
     // optimal: difference array technique
    int n = nums.size();
     vector<int> diff(n+1,0);

     for(int i =0; i<queries.size(); i++){
        int l = queries[i][0];
        int r = queries[i][1];

        diff[l]++;
        if(r+1<n) diff[r+1]--;
     }
     int curr=0;
     for(int i =0; i<n;i++){
        curr +=diff[i];
        if(curr<nums[i]) return false;
     }
     return true;
    }
};