class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int smallest= *min_element(nums.begin(), nums.end());
        int largest= *max_element(begin(nums), end(nums));

        // Concept: GCD will always <= smallest (smallest can be maxm gcd value)

        // for(int i=1; i<=smallest; i++){ // 1 se smallest tak iterate kiye
        //     if(smallest%i==0 and largest%i==0){

        //     }
        // }
        int gcd;
        for(int i=smallest; i>=1; i--){
            if(smallest%i==0 and largest%i==0) {
                gcd= i;
                break;
            }
        }
        return gcd;
    }
};