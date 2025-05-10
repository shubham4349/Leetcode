class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();


         long long sum1=0 , sum2=0;
         long long zeroCnt1=0, zeroCnt2=0;

        for(int i =0; i<n1; i++){
               sum1 +=nums1[i];

               if(nums1[i]==0){ // agar 0 milra to sum ko 1 se badhao
                   zeroCnt1++;
                   sum1++; 
               }

        }
        
        for(int i =0; i<n2; i++){
               sum2 +=nums2[i];

               if(nums2[i]==0){
                   zeroCnt2++;
                   sum2++; 
               }

        }
        if(sum1< sum2 and zeroCnt1==0) return -1; // ek to sum1 ,sum2 se chotta h, + usme 0 nhi h to increase kaise kroge?? simply return -1
        if(sum1> sum2 and zeroCnt2 ==0) return -1;

            return max(sum1, sum2); // maxm of sum1, sum2 ko hi return kroge cuz jiska sum jyada h whi minm equal sum hua...jiska nhi hona h vo to if wale condition me execute hoke -1 return krdega. 
         
    }
};