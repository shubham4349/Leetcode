#define pb push_back
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         map<int,int> mp;
         for(int& num:nums1) mp[num]++;
         vector<int> ans;
         for(int& num:nums2){
             if(mp[num]>0){ // ye num nums2 me bhi h
                 ans.pb(num);
                 mp[num]--;
             }
         }
        return ans;
       
    }
};