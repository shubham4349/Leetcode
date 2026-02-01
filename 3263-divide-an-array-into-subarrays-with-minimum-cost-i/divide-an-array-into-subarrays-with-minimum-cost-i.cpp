class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
      //  int sum=nums[0]; // 0 wala hmesha included rhega
        // minm cost ke liye subarr ka sbse chota element hi first hoga
        // eg 1,4, 2,7,5,9, 3 
        // ans-> 1+2+3
        // second minm and third minm find kr
                    // chup chap sort krke find kr!!
                        // int first_minm=INT_MAX,sec_minm=INT_MAX;
                        // int f_idx=-1,s_idx=-1;
                        // for(int i=1; i<n; i++){
                        //     if(first_min<nums[i]){
                        //         first_min=nums[i];
                        //         f_idx=i;
                        //     }
                        // }
                        // for(int i=1; i<n; i++){
                        //     if(first_min<nums[i]){
                        //         first_min=nums[i];
                        //         f_idx=i;
                        //     }
                        // }
        int sum=0;
        sort(nums.begin()+1,nums.end()); 
        sum+=nums[0];
        sum+=nums[1];
        sum+=nums[2];
        return sum;



    }
};