class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp(n,-1);

        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                if(i!=j and nums[i]==nums[j]) {
                    temp[i] = nums[i];
                }
            }
        }
        vector<int> ans;

        for(int i=0; i<n; i++){
            if(temp[i]==-1){
                ans.push_back(nums[i]);
            }
        }

        // for(int i =0; i<n; i++){
        //      for(int j = 0; j<temp.size(); j++){
        //         if()
        //      }
        // }
        
        // for(int i =0; i<n; i++){
        //     int count = 0;
        //     for(int j =0; j<n; j++){
                
        //         if(i!=j and nums[i]==nums[j]) count++;

        //         if(count==0) temp.push_back(nums[i]);
        //     }
        // }

   return ans;

    }
};