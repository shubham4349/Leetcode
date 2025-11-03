class Solution {
public:
    int power(int n){
        int cnt=0;
         while(n!=1){
            if(n%2==0) n=n/2;
            else n=3*n+1;
            cnt++;
         }
         return cnt;
    }
    int getKth(int lo, int hi, int k) {

         vector<pair<int,int>> nums; // {pow,val}
           for(int i=lo; i<=hi; i++){
             nums.push_back({power(i),i});
           }
           sort(nums.begin(),nums.end()); // pehle power se sorting hogi, fir number se
           // ye behind the scene comparator hi h
           return nums[k-1].second;
    }
};