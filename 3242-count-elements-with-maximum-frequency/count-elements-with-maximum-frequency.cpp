class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int maxFreq = 0;
         vector<int> temp;

        int n = nums.size();
       int count = 0;
        for(int i =0; i<n; i++){
            int freq = 0;
            for(int j = 0; j<n; j++){
                if(nums[i]==nums[j]) freq++;    
            }
             maxFreq = max(maxFreq, freq);
        }

         for(int i =0; i<n; i++){
            int count = 0;
            for(int j = 0; j<n; j++){
                if(nums[i]==nums[j]) count++;   

                
            }
            if(count==maxFreq) {
                    temp.push_back(nums[i]);
                } 
            
        }

        return temp.size();
    }
};