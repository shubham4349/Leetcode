class Solution {
public:
    vector<int> diStringMatch(string s) {
        // d means decreaseing from n
        // i means increasing from 0;

        int n=s.size();
        int i=0;
        int j=n;
        vector<int> ans;
        for(int k=0; k<n; k++){
            if(s[k]=='I'){
                ans.push_back(i);
                i++;
            }else{
                ans.push_back(j);
                j--;
            }
        }
        ans.push_back(i); // j bhi dal skte cuz j==i 
        return ans;
    }
};