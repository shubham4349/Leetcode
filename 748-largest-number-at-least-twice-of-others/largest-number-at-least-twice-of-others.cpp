class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int max= *max_element(nums.begin(),nums.end());
        int n=nums.size();
        int idx=0;
        for(int i=0; i<n; i++){
            if(nums[i]==max) idx=i;
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=max){
                if(max<2*nums[i]) return -1;
            }
        }
        return idx; 
    }
};