class Solution {
public:
      int idxInOrder(char ch, string order){
           for(int i=0; i<order.size(); i++){
               if(ch==order[i]) return i;
           }
           return -1;
        }
    string customSortString(string order, string s) {
        // string ans="";
        // for(int i=0; i<order.size(); i++){
        //     if(s.find(order[i])!=string::npos){ // agar s me h
        //          ans+=order[i];
        //     }
        // }
        // for(int i=0; i<s.size(); i++){
        //     if(ans.find(s[i])==string::npos){ // agar ans me nhi h
        //          ans+=s[i];
        //     }
        // }
        // return ans;
      
        vector<pair<int,char>> nums;

        for(int i=0; i<s.size(); i++){
            nums.push_back({idxInOrder(s[i],order),s[i]}); // 
        }
        sort(nums.begin(),nums.end());
        string ans="";
        // pair ek hi key,value store krta h
        // map-> multiple k->v pairs
        for(auto &p:nums){
            ans+=p.second; 
        }
        return ans;

    }
};