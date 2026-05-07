class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
       
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set<int> s;
        s.insert(nums1.begin(),nums1.end());
        for(int num:nums2){
            if(s.count(num)!=0){ // set me pehe se h to
                return num;
            }
        }

        if(nums1[0]==nums2[0]) return nums1[0]; // eg 2
        else if(nums1[0]<nums2[0]) return nums1[0]*10 + nums2[0]; // chota*10+bada
        else return nums2[0]*10 + nums1[0];
    }
};