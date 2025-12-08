class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        // using maths
        // cantor's diagonal arg
        // mtlb
        ///  for each idx i
        // ans[i]= flip of nums[i][i]
        string ans="";
        for(int i=0; i<nums.size(); i++){
            if(nums[i][i]=='1')ans+="0";
            else ans+="1";
        }
        return ans;
    }
};