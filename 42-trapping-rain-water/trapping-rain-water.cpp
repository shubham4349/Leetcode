class Solution {
public:
    int trap(vector<int>& height) {

       int n= height.size();

       int maxm = *max_element(height.begin(), height.end());
       int maxmIdx;
       for(int i=0; i<n; i++){
                if(height[i]==maxm) maxmIdx=i;
       }

       // 0 se maxmIdx tak
       int water=0;
       int leftmax=height[0];

       for(int i=1; i<maxmIdx; i++){
            if(height[i]>leftmax)  leftmax=height[i];  
            else water += leftmax-height[i];
       }
        int rightmax=height[n-1];
        // last idx se max ke idx tak
       for(int i=n-2; i>=maxmIdx; i--){
            if(height[i]>rightmax)  rightmax=height[i];  
            else water += rightmax-height[i];
       }
       return water;
       
    }
};