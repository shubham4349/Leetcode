class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int> cnt;
        for(int num:nums) cnt[num]++;
       // vector<int> ans;
        // if cnt>=2 to do hi dalo...nhi to their cnt
        nums.clear();
        for(auto &[k,v]:cnt){
            if(v>=2){
                nums.push_back(k);
                nums.push_back(k);
            }else {
                nums.push_back(k);
            }
        }
      //  nums.assign(ans.begin(),ans.end());
        return nums.size();
    }
};