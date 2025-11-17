class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        // vector<int> idx;
        // for(int i=0; i<n; i++){
        //     if(nums[i]==1) idx.push_back(i+1);
        // }
        // int l=idx.size();
        // for(int i=0; i<l; i++){
        //     for(int j=0; j<l; j++){
        //       if(i!=j){
        //          if(abs(idx[i]-idx[j])-1<k) return false;
        //       }
        //     }
        // }
        // return true;
        int counter=0;
        bool seen=false;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                if(seen and counter<k) return false;
                seen =true;
                counter=0;
            }else counter++; // 0 pe cnter bdhega
        }
        return true;
    }
};