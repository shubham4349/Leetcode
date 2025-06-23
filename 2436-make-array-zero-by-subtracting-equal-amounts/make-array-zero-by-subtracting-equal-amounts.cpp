class Solution {
public:
    // int smallestNonZero( vector<int>& nums){
    //     int snz; // smallest non zero
    //     int n=nums.size();
    //     for(int i=0; i<n; i++){
    //           if(nums[i]!=0){
    //             snz=nums[i];
    //             break;
    //           }
    //     }
    //     return snz;


    // }
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();

        // x<= smallest non zero 

        // case 1 = x = smallest non zero 
        //
    //     if(n==1 and nums[0]==0) return 0;
    //     sort(nums.begin(), nums.end());
    //     int sum=accumulate(nums.begin(),nums.end(),0);
    //     int count=0;
    //     while(sum!=0){
    //         for(int i=0; i<n; i++){
    //             if(nums[i]!=0) nums[i] -= smallestNonZero(nums);
    //             sum +=nums[i];
    //         }
    //         count++;
    //         //sum=0; 
    //     }
    //    return count;

        // hint-3: 
        set<int> hello(nums.begin(),nums.end()); 

        if(*hello.begin()!=0) return hello.size();
        else return hello.size()-1;

        return -1; 

    }
};