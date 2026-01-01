#define pb push_back
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        // 9 ke case me phatega
        for(int i=n-1; i>=0; i--){
            if(digits[i]!=9){
                digits[i]+=1;
                return digits; // 8,9,9,9 yha pe retun hoga
                // pehla non 9 digit milne pr yhi pe return hoga
            } else digits[i]=0; 
        }
        // jab sare element 9 ho;
        digits[0]=1;
        digits.pb(0);
        return digits;
    }
};