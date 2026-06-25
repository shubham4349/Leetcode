class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int sub_arr_cnt=0;

        for(int i=0; i<n; i++){ // max-1e3
         vector<int> temp;
         int target_cnt=0;
         int size=0;

            for(int j=i; j<n; j++){ // max-1e3
                temp.push_back(nums[j]);
                size++;
                if(nums[j]==target) target_cnt++;

                if(target_cnt>size/2) sub_arr_cnt++;
            }
            temp={}; 
        }
        return sub_arr_cnt;
    }
};