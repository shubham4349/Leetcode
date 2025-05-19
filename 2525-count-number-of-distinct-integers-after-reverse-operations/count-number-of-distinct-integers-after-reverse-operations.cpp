class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        
        int n =nums.size();
        for(int i =0; i<n; i++){
            nums.push_back(digitRev(nums[i]));

        }
        set<int> s(nums.begin(), nums.end());
        return s.size();
    }
    int digitRev(int a){

        int rev = 0;
        while(a>0){
            int digit= a%10;
            rev = rev*10 + digit;
            a /=10;
        }
        return rev;
    }
};