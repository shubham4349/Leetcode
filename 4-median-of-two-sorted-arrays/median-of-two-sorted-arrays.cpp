class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n= nums1.size();
        int m= nums2.size();

        vector<int> temp;

        for(int i =0; i<n; i++){
            temp.push_back(nums1[i]);
        }
         for(int i =0; i<m; i++){
            temp.push_back(nums2[i]); 
        }
       sort(temp.begin(), temp.end());

       //double median = temp[temp.size()/2] + temp[temp]
       double median;
    int k = temp.size();
       if(k%2 !=0)  {
              median = temp[k/2];
              return median;
       }
       // even case
       median = (temp[k/2]+temp[(k/2) -1])/2.0;

       return median;
    }
};