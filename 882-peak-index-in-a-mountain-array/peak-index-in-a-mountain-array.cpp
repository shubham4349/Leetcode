class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int maxm= INT_MIN;
        int idx=0;
        for(int i =0; i<arr.size();  i++){
            if(arr[i]>maxm) {
                maxm = arr[i];
                idx =i;
            }
        }
        return idx;
        
        
    }
};