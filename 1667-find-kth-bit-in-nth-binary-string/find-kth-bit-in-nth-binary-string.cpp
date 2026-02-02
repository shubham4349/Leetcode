class Solution {
public:
    string reverseInvert(string& s){
        for(auto& ch: s){
            if(ch=='0') ch='1';
            else ch='0';
        }
        reverse(s.begin(),s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        vector<string> nums(n);
        nums[0]="0";
        for(int i=1; i<n; i++){
            nums[i]=nums[i-1]+"1"+reverseInvert(nums[i-1]);
        }
        return nums[n-1][k-1];
    }
};