class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int eleSum= accumulate(nums.begin(), nums.end(),0);
        int digitSum=0;
        for(int i=0; i<nums.size(); i++){
            while(nums[i]>0){
                digitSum +=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }
        int ans= abs(eleSum-digitSum);
        return  ans;
    }
};