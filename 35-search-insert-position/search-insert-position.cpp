class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
       
       int n = arr.size();

       for(int i = 0; i<n; i++){
        if(target==arr[i]) return i;

        else if(target <arr[i]) return i; // kyuki usko i pe hi dalna h
       
   
    }
       return arr.size();
    }
};