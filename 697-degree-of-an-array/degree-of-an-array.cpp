class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        map<int,int> cnt;
        for(int& num:nums) cnt[num]++;
        int degree=0; // degree of arr
        for(auto& it:cnt){
            degree=max(degree,it.second);
        }
        // vo numbers choose kr jinki cnt==degree
        // then check kr kiska start->end smallest h
        vector<int> ans;
        for(auto& it:cnt){
            int first=0,last=0;
             if(it.second==degree){
                 // first occurence
                 for(int i=0; i<n; i++){
                    if(nums[i]==it.first){
                        first=i;
                        break;
                    }
                 }
                 // last occurence
                 for(int i=n-1; i>=0; i--){
                    if(nums[i]==it.first){
                        last=i;
                        break;
                    }
                 }
                  ans.push_back(last-first+1);
             }       
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};