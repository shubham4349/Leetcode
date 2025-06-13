class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        // fr eg i

        // expected = [1,1,1,2,3,4];

        // height = [1,1,4,2,1,3];

        vector<int> curr(heights.begin(), heights.end());
        sort(heights.begin(), heights.end());
        vector<int> expected(heights.begin(), heights.end());

        int n=heights.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(expected[i]!=curr[i]) count++;
        }
        return count;
    }
};