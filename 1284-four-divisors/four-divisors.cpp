class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        // brute - tc->  1e9 
        // for(int i=0; i<n; i++){
            // int divi=0;
            //  for(int j=1; j<=nums[i]; j++){
            //     if(nums[i]%j==0) divi++;
            //  }
            //  if(divi==4) sum+=nums[i];
       // }
       
       // optimal 
       // concept -> factor hmesa pair me hote h
       // 1,2,3,4,5,6,7,8....19,20,21
       // 21%1==0 so 1 factor h ...aslo 21/1 will be a factor
       // ese hi, 21%3==0->3 factor so 21/3 =7 will also be a factr
        // so just check till sqrt(21) 
        int sum=0;
        for(auto num:nums){
            int divi=0;
            int divisum=0;
            for(int i=1; i*i<=num; i++){
                if(num%i==0){
                    divi++;
                     divisum+=i;
                     } 
                    int x=num/i; // 21/3 ke case me 7, shi, lekin 4/2 ke case me again 2..so usi ko ek bar skip krna h
                    if(x==i) continue; // 4 ke case me 2 do bar count hua,perfect square case
                    else if(num%x==0){
                        divi++;
                        divisum+=x;
                    }
            }
            if(divi==4) sum+=divisum;
        }
        return sum;
    }
};