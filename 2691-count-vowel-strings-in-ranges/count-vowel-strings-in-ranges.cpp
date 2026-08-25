class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int n=words.size();
        for(auto& word:words){
            char start=word[0];
            char end=word[word.size()-1];

            if(start=='a' or start=='e' or start=='i' or start=='o' or start=='u'){
                if(end=='a' or end=='i' or end=='e' or end=='o' or end=='u') word="#"; 
                // jo correct vowel h unk mark kr diya
            }
        }
        vector<int> ans;
        // for(auto& q:queries){ -> 1e5*1e5 -> 1e10-> TLE!!!
        //     int start=q[0];
        //     int end=q[1];
        //     int cnt=0;
        //     for(int i=start; i<=end; i++){
        //         if(words[i]=="#") cnt++;

        //     }
        //     ans.push_back(cnt);
        // }
        vector<int> pre(n,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(words[i]=="#"){
                cnt++;
            }
            pre[i]=cnt; // copy pe drwa kr smjh aayega
        }
        for(auto& q:queries){
            int start=q[0];
            int end=q[1];
           
            // less say tmhe niklna h 3->7
            // pre[7](0 se 7) - pre[3](0 se 7) -> isme 3 hmesa exclude ho rha
            // if(start>0){

            // }
            int total;
            if(start==0) total=pre[end]; // 0->7
            else total=pre[end]-pre[start-1]; 
            ans.push_back(total);
        }

        return ans;
    }
};