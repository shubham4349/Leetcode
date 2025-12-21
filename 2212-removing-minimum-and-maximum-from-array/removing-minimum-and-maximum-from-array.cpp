#define all(v) (v).begin(),(v).end()
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        // constraint-1e5-> O(n) kr sakte ho
        int maxm=*max_element(all(nums));
        int minm=*min_element(all(nums));
        int maxIndx=0;
        int minIndx=0;
        for(int i=0; i<n; i++){
            if(nums[i]==maxm) maxIndx=i;
            else if(nums[i]==minm) minIndx=i;
            else continue;
        }
        int midIndx=(n-1)/2;
        // agar  dono indx <midIndx-> remove from front
        // agar dono indx >midIndx -> remove from back only
        // agar x<minIndx<y -> remove from front and back
        int ans1=0,ans2=0,ans3=0;
        // if(maxIndx<=midIndx and minIndx<=midIndx){
            // remove from front;
            ans1=(maxIndx>minIndx?maxIndx+1:minIndx+1);// eg2
        // }
        // else if(maxIndx>=midIndx and minIndx>=midIndx){
            // remove from back;
             ans2=n-(maxIndx<minIndx?maxIndx:minIndx); //eg1
        // } else{
           int maxxx=(maxIndx>minIndx?maxIndx:minIndx);
           int minnn=(maxIndx<minIndx?maxIndx:minIndx);
           ans3=minnn+1+n-maxxx;
        // }
        return min({ans1,ans2,ans3});

    }
};