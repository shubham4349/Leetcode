class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // int maxm= INT_MIN;
        // int idx=0;
        // for(int i =0; i<arr.size();  i++){
        //     if(arr[i]>maxm) {
        //         maxm = arr[i];
        //         idx =i;
        //     }
        // }
        // return idx;
        int n=arr.size();
        int maxm = *max_element(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
           if(arr[i]==maxm) return i;
        }
   return -1;
        
    }
};