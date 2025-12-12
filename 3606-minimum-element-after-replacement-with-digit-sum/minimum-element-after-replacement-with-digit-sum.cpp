class Solution {
public:
    
    int minElement(vector<int>& nums) {
        int minmDigitSum=INT_MAX;
        for(int num:nums){
            int sumOfDig=0;
            while(num>0){
                int digit=num%10;
                sumOfDig+=digit;
                num/=10;
            }
            minmDigitSum=min(minmDigitSum,sumOfDig);
        }
        return minmDigitSum;
    }
};