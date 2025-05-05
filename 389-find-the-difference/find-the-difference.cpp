class Solution {
public:
    char findTheDifference(string s, string t) {
        
        
     char ans = 0;
     // xor - > 0 xor 0 and 1 xor 1 gives 0;

     for(int i =0; i<s.length(); i++){
        ans = ans^s[i];
     }

     for(int j =0; j<t.length(); j++){
        ans = ans^t[j];
     }
     return ans;
      
        //  vector<char> temp;

        //  for(int i =0; i<s.length(); i++){
        //     temp.push_back(s[i]);
        //  }
        //  for(int i =0; i<t.length(); i++){
        //     temp.push_back(t[i]);
        //  }
        //  set<char> st(temp.begin(), temp.end());

        //  vector<char> output(st.begin(), st.end());


        //  char ans = output[0];

     
    }
};