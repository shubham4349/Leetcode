class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%3 != 0) ans++;
        }
        return ans;
    }
    // agar 8 rha to usme +1 wala operation , simple 
};
 