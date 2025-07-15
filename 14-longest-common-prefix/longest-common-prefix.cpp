class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n=strs.size();
         if(n==0) return "";

         string pre=strs[0];
         //int m=pre.length();
         for(int i=1; i<n; i++){
             while(strs[i].find(pre)!=0){ // strs[i]!=pre
                  pre=pre.substr(0,pre.length()-1); // agar pre string ke equal nhi h to pre ko chota krte jao
             }
         }
         return pre;
    }
};