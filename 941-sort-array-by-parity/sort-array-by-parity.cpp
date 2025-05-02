class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        
        int start = 0;
        int end = n-1; 

       // Approach-
    //    start me agar even ho to start++,
    //    end me agar odd ho to end--;
    //    else (yani agar start me odd ho ya end me even)-> then
    //    swap those with start++, end--
        while(start<end){
            if(nums[start]%2==0){ // jab start pe even ho, skip
                start++;
            }
            else if(nums[end]%2!=0){ // jab end me odd ho, skip
                   end--;
            } 
            else {
                swap(nums[start], nums[end]);
                start++; end--;
            }
        }
        return nums;
    }
};