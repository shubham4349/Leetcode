class Solution {
public:
    int arraySign(vector<int>& nums) {
       
        int countNeg = 0;
        int n = nums.size();


        for(int i =0; i<n; i++){
            if(nums[i]==0) return 0;
            if(nums[i]<0) countNeg++;
            
        }

        if(countNeg %2!=0) return -1;

       return 1;

    }
};