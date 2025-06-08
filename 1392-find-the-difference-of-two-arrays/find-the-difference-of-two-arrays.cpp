class Solution {
public:
    // bool notfoundin1(int x , vector<int>& arr1){
    //             for(int i =0; i<arr1.size(); i++){
    //                  if(x== arr1[i]) return true;
    //             }
    //             return false;
    // }
    // bool notfoundin2(int x, vector<int>& arr2){
    //             for(int i =0; i<arr2.size(); i++){
    //                  if(x== arr2[i]) return true;
    //             }
    //             return false;
    // }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size();
        int n2 = nums2.size();

      // ek array ke elemnt me pakdo, usko dusre array me pura traverse krao, agar match nhi mil then vo ans h
    //   vector<int> ans1;
    //   for(int i =0 ; i<n1; i++){
    //       if(notfoundin2(nums1[i], nums2)) continue;
    //       else{ // yani element nhi h
    //               ans1.push_back(nums1[i]);
    //       }
    //   }
    //   for(int i =0 ; i<n2; i++){
    //       if(notfoundin1(nums2[i], nums1)) continue;
    //       else{ // yani element nhi h
    //               ans1.push_back(nums2[i]);
    //       }
    //   }
    //   vector<vector<int>> mat;
    //   mat[0][0]= ans1[0];
    //   mat[0][1]= ans1[1];
    //   mat[1][0]= ans1[2];
    //   mat[1][1]=ans1[3];

    //   return mat;
       unordered_set<int> set1(nums1.begin(), nums1.end());
       unordered_set<int> set2(nums2.begin(), nums2.end());
       
       vector<int> ans1;
       for(int num:set1 ){
            if(set2.count(num)==0){ // agr set1 ka element set 2 me nih h toh
                ans1.push_back(num);
            }
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