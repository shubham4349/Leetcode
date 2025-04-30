class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int evencount = 0;
        for(int i =0; i<n; i++){
            int count = 0;
           
            int digit;
            while(nums[i]!=0){
               digit = nums[i]%10;
               count++;
               nums[i] /= 10;
            }
            if(count%2==0) evencount++;
        }
        return evencount;
    }
};