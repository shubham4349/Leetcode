class Solution {
public:
    // int alphabetNum(char ch){ // aur just use krle ch-'a'+1 
    //      string alphabet="abcdefghijklmnopqrstuvwxyz";
    //      for(int i=0; i<26; i++){
    //         if(ch==alphabet[i]) return i+1;
    //      }
    //      return -1;

    // }  bade string me out of range aa rha isse!!!!!
    
    // int digitalRoot(int num){
    //      int sum=0;
    //      while(num>0){
    //         int digit=num%10;
    //         sum+=digit;
    //         num=num/10;
    //      }
    //      return sum;
    // }
    int getLucky(string s, int k) {
        
        // int n=s.length();
        // string newStr="";
        // for(int i=0; i<n; i++){
        //     int nom=s[i]-'a'+1;
        //     newStr+=to_string(nom);
        // }
        

        // for(int i=1; i<=k; i++){
        //     num=digitalRoot(num);

        // }
        // return num;
        int n=s.length();
        string newStr="";
        for(char ch:s){
            newStr+=to_string(ch-'a'+1);
        }
        for(int i=1; i<=k; i++){
            int sum=0;
            for(char c:newStr){
                sum+= c-'0';
            }
            newStr=to_string(sum);
        }
        return stoi(newStr);


    }
};