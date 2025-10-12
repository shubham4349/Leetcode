class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        string num=to_string(n);
        vector<int> ans;
        for(int i=0; i<num.size(); i++){
           
             char ch=num[i];
            if(ch!='0'){
            string str="";
             str+=ch;
            int noOfzero=num.size()-i-1;
            while(noOfzero--){
               str+='0';
            }
            ans.push_back(stoi(str));
            }
        }
        return ans;

    }
};