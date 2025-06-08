class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2 = nums2.size();
       unordered_set<int> set1(nums1.begin(), nums1.end());
       unordered_set<int> set2(nums2.begin(), nums2.end());
       
       vector<int> ans1;
       for(int num:set1 ){
            if(set2.count(num)==0){ // agr set1 ka element set 2 me nih h toh
                ans1.push_back(num);
            }
            // set.cunt(i) =1 // agar i present ho
            //             =0 //agar i na ho
       }
       vector<int> ans2;
       for(int num: set2){
            if(set1.count(num)==0){ 
                ans2.push_back(num);
            }
       }
       return {ans1,ans2};
    }
};