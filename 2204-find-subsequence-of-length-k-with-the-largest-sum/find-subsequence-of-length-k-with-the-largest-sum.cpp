class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> copy(nums.begin(), nums.end());
        sort(copy.begin(), copy.end(), greater<int>());

        vector<int> ans;
        // bas top k greater ko ek map me dalo
        unordered_map<int,int> count;
        for(int i=0; i<k; i++){
            count[copy[i]]++; // rest nums ke elemnt ki freq 0 rhegi
        }
        for(int i=0; i<n; i++){
            if(count[nums[i]]>0){
                ans.push_back(nums[i]);
                count[nums[i]]--; // ye nhi add kroge to 3rd test case pe error dega
            }
        }
        return ans;
    }
};