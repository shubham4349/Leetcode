class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
       for(auto& num:nums) mp[num]++;

       int cnt=0;
       for(auto& it:mp){
         if(it.second==3){
             int a=-1,b=-1,c=-1;
                for(int j=0; j<n; j++){
                    if(nums[j]==it.first and a==-1) a=j;
                    else if(nums[j]==it.first and b==-1) b=j;
                    else if(nums[j]==it.first and c==-1) c=j;
                }
             if(b-a==c-b) cnt++;
         }
       }
       return cnt;
    }
};