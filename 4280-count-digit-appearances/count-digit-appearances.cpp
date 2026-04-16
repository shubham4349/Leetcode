class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
      //  string num="";
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
           string x=to_string(nums[i]);
           for(auto &ch:x){
             if(ch==digit+'0') cnt++;
           }
        }
        return cnt;
    }
};