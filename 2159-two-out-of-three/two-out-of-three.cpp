#define all(v) (v).begin(),(v).end()
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        // answer arr me aise values dalo jo atleast 2 given array me ho
            
        vector<int> ans;
        set<int> s1,s2,s3,ansSet;
        for(int num:nums1){
            s1.insert(num);
        }
        nums1.assign(all(s1));
        for(int num:nums2){
            s2.insert(num);
        }
        nums2.assign(all(s2));
        for(int num:nums3){
            s3.insert(num);
        }
        nums3.assign(all(s3));
        map<int,int> mp;
        for(int num:nums1) mp[num]++;
        for(int num:nums2) mp[num]++;
        for(int num:nums3) mp[num]++;
       
        for(auto &m:mp){
            if(m.second>1){ // mtlb dusre set me bhi mila h
                ansSet.insert(m.first);
            }
        }
        ans.assign(all(ansSet));
        return ans;
    }
};