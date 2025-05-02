class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n = nums.size();

         vector<int> less, pivott, more;

         for(int i =0; i<n; i++){
            if(nums[i]<pivot) less.push_back(nums[i]);
            else if(nums[i]==pivot) pivott.push_back(nums[i]);
            else more.push_back(nums[i]);
         }
     
         vector<int> output;

         for(int i=0; i<less.size(); i++){
               output.push_back(less[i]);
         }
         for(int i=0; i<pivott.size(); i++){
               output.push_back(pivott[i]);
         }
         for(int i=0; i<more.size(); i++){
               output.push_back(more[i]);
         }

         return output;
       
    }
};