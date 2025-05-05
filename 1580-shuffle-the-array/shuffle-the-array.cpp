class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        

        vector<int> x;


        for(int i =0; i<n; i++){ // n = 3 pe o, 1,2 hi select kiya
             x.push_back(nums[i]);
        }

        vector<int> y;

        for(int i =n; i<2*n; i++){
            y.push_back(nums[i]);
        }
        
         vector<int> ans;
        for(int i =0; i<n; i++){
            ans.push_back(x[i]);
            ans.push_back(y[i]);
        }
        return ans;
        
    }
};