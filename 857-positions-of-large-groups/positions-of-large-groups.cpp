class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        
        int n=s.length();
        set<int> hello;
        for(char ch: s){
            hello.insert(ch);
        }
        if(hello.size()==n) return {};

        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
            if(s[i]==s[i+1] and s[i+1]==s[i+2] and s[i+2]==s[i]){
                int start=i;
                int end=-1;
                while(s[i]==s[i+1]){
                    i++;
                    end=i;
                }
                ans.push_back({start,end});
            }
        }
        return ans;
       
    }
};
/* This approach become wrong, coz see the 3rd test case:
 unordered_map<char,int> count;
       
        for(char ch: s){
            count[ch]++;
           
        }
       
        int start=-1,end=-1;

        vector<vector<int>> ans;
     
        for(int i=0; i<n; i++){
            if(count[s[i]]>=3 ){
                 start = i;
                 end = i+(count[s[i]]-1);
                ans.push_back({start,end});
                break;
            }
        }
        return ans;
*/