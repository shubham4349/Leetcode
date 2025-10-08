class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int i=0; int j=0;
        int n=s.size(); 
        int sum=0;
        while(i<n and j<n){
            if(s[i]==t[j]){
                sum+=abs(i-j);
                i++;
                j=0;
            }
           else j++;
        }
        return sum;
    }
};