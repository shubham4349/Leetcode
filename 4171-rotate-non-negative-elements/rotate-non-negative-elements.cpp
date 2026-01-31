class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> positive;
        for(int& num:nums){
           if(num>=0) positive.push_back(num);
        }
        int m=positive.size();
        if(m==0) return nums;
        // left rotate by k=1
        // [1,2,3,4]-> [2,3,4,1]
                // TLE-> 951/1023
                // while(k--){ 
                //      // 1 rotation
                //      int first=positive[0];
                //     for(int i=0; i<m-1; i++){
                //         positive[i]=positive[i+1]; // nums[m-2] me nums[m-1] ki val jayegi
                //       }
                //      positive[m-1]=first; 
                // }
        // optimal rotation method
        vector<int> helper(m);
        for(int i=0; i<m;i++){
            helper[i]=positive[(i+k)%m];
        }
        positive=helper;
        int idx=0;
        for(int i=0; i<n; i++){
              if(nums[i]>=0){
                 nums[i]=positive[idx];
                 idx++;
              }
        }
        return nums;
    }
};