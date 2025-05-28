class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        // pair = <i, no of elemnts jo nums[i] chote h>
        // fir usko vector me dalke retun krdenge
        unordered_map<int, int> mp;

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        // sorted me elemnets jo i se chote h is the index of i;
        for(int i =0; i<sorted.size(); i++){
           
           if(mp.find(sorted[i])==mp.end()){
             mp[sorted[i]] =i; 
           }
        }
        vector<int> ans;
        for(int i =0; i<n; i++){
                ans.push_back(mp[nums[i]]);
        }

return ans;
    }
};