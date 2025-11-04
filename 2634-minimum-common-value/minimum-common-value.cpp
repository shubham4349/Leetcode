#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1(all(nums1));
        set<int> n2(all(nums2));
        set<int> s;
        for(int num:nums1) s.insert(num);
        for(int num:nums2) s.insert(num);
        vector<int> hey(all(s));
        for(int num:hey){
            if(n1.find(num)!=n1.end() and n2.find(num)!=n2.end()){ // agar n1, n2 dono me ho
                return num;
            }
        }
         return -1;
    }
};