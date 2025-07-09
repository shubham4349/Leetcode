class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;

        for(int i=2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto num : nums) count[num]++;
        for(auto num : nums){
            if(isPrime(count[num])) return true;
        }
        return false;

    }
};