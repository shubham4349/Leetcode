class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n = candyType.size();
        int maxLimit = n/2 ;

        set<int> s(candyType.begin(), candyType.end());

        if(s.size()>=maxLimit) return maxLimit;
        else return s.size();
    }
};