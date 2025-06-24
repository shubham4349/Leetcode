class Solution {
public:
    bool keyDiff(int x, vector<int>& nums, int key, int k){
        vector<int> j;
        int n=nums.size();
        for(int i=0; i<n; i++){
              if(nums[i]==key) j.push_back(i);
        }

        for(int i=0; i<j.size(); i++){
            if(abs(x-j[i])<=k and nums[j[i]]==key) return true;
        }
        return false;
    }
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        int n=nums.size();

        vector<int> ans;
        for(int i=0; i<n; i++){
            if(keyDiff(i,nums,key,k)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};