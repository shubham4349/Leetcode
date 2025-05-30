class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n  =nums.size();
        if(n==0) return {-1,-1};
        if(n==1 and nums[0]==target) return {0,0};
        if(n==1 and nums[0]!=target) return {-1,-1};
        
        // int start=0;
        // int end=n-1;
        // vector<int> ans;
        // while(start<=end){
        //     if(nums[start]<target) {
        //         start++;
        //          if(nums[start]==target) ans.push_back(start);
        //     }
           
        //     if(nums[end]>target){
        //         end--;
        //          if(nums[start]==target) ans.push_back(end);
        //     }
            

        // }
        // sort(ans.begin(), ans.end());
        // if(ans.size()!=0) return ans;


        vector<int> ans;
        // int first= lower_bound(nums.begin(), nums.end(),0);
        // int last= upper_bound(nums.begin(), nums.end(),0)-1;
        // ans.push_back(first);
        // ans.push_back(last);

        // int idx=0
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                ans.push_back(i);
                // idx++;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i]==target){
                ans.push_back(i);
                break;
            }
        }
        if(ans.size()!=0) return ans;
        return {-1,-1};

    }
};