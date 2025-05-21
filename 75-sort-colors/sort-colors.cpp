class Solution {
public:
    void sortColors(vector<int>& nums) {
        
       int n =nums.size();

       int count0 =0, count1= 0, count2=0;

       for(int i =0; i<n; i++){
          if(nums[i]==0) count0++;
          else if(nums[i]==1) count1++;
          else count2++;
       }

       // ab 0 ko uske count tak fill kro nums me:

       for(int i =0; i<count0; i++){
           nums[i]=0;
       }
     // ab 1 ko uske count0+count1(yani 2 idx se 4 tak) fill kro nums me:
       for(int i =count0; i< count0 +count1; i++){
        nums[i]=1;
       }
       // vice versa
       for(int i =count0+count1; i<n; i++){
        nums[i] =2;
       }

        
    }
};