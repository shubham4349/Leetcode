// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // ture-> when ver is bad
        if(n==1) return 1;
        while(isBadVersion(n)){
            n--;
        }
        return n+1;
    }
};