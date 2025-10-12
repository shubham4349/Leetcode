class Solution {
public:
    int minm(vector<int>& nums){
        int mini = *min_element(nums.begin(), nums.end());
        return mini;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int n=nums.size();
        while(k--){
            bool check=false;
            for(int i=0; i<n; i++){  
               int min=minm(nums);
            
               if(nums[i]==min and check==false ){
                 nums[i]=nums[i]*multiplier;
                 check=true;
             }
           }
        }
        return nums;
    }
};