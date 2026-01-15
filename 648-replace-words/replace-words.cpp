class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        // har word ke prefix ko check krte jao, if prefix is found in dict then replace the whole word with prefix and move forward
        vector<string> sent;
        int i=0;
        string st="";
        while(i<sentence.size()){
            if(sentence[i]==' '){
                sent.push_back(st);
                st="";
            }
           else st+=sentence[i];
            i++;
        }
        sent.push_back(st); 
        vector<string> ans;
        set<string> dict(dictionary.begin(),dictionary.end());
        //[the,cattle,was,rattled,by,the,battery] -> sent vector
        for(int i=0; i<sent.size(); i++){
            string prefix="";
            bool send=false;
            for(char& ch: sent[i]){
                   prefix+=ch;
                   if(dict.find(prefix)!=dict.end()){// prefix in dict
                      send=true;
                      ans.push_back(prefix);
                      break;
                   }
            }
          if(send==false)ans.push_back(prefix);
        }
        string res="";
        for(auto& s:ans){
            res+=s;
            res+=' ';
        }
        while(!res.empty() and res.back()==' ') res.pop_back();
        return res;
    }
};