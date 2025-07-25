class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      
      unordered_map<string,int> count; 
      for(string str : arr) count[str]++;
      vector<string> ans;
    //   for(auto it : umap){
    //       if(it.second==1) ans.push_back(it.first);
    //   } --> gving me wrong answer kyuki map me order preserve nhi hota so map ko iterate mt kro
       for(string str : arr){
         if(count[str]==1) ans.push_back(str);
       }
      if(k>ans.size()) return "";
      return ans[k-1];

        
    }
};