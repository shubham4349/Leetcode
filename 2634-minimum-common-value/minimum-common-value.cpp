#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         // approach 2:
         // since arry sorted h so 2 pointer use kr
         int i=0;
         int j=0;
         while(i<nums1.size() and j<nums2.size()){
             if(nums1[i]==nums2[j]){
                 return nums1[i];
             }
             else if(nums1[i]<nums2[j]) i++; // i ko bada kr
             else j++;
         }
         return -1;
    }
};