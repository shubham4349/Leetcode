class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i =0; i<n;i++){
            bool pushed=false;
             for(int j=1; j<nums[i]; j++){
                 int x=(j|(j+1));
                 if(x==nums[i]){
                    pushed=true;
                   ans.push_back(j);
                    break;
                 }
             }
             if(pushed==false) ans.push_back(-1);

        }
        return ans;
    }
};