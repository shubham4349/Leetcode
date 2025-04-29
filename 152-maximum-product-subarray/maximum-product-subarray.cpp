class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxPro=nums[0] ;

       int n = nums.size();
        for(int i =0; i<n; i++){

            int subarrPro = 1;
            for(int j = i; j<n; j++){
                  subarrPro *=nums[j];
                  maxPro = max(maxPro, subarrPro);
            }
        }
        return maxPro;
    }
};