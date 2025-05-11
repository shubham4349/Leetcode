class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int> temp; // let num = 9966

        while(num>0){
            int digit = num%10;
             temp.push_back(digit);
            num = num/10;
           
        }
    
          for(int i = temp.size()-1; i>=0; i--){ // temp = 6,6,9,9 // maximize krne ke liye left se jo pehla 6 h use 9 krenge ...aur return 9996 krenge
          if(temp[i]==6){
            temp[i]=9;
            break;
          }
             
          }
          int ans = 0;
          for(int i = temp.size()-1; i>=0; i--){
            ans = ans*10 + temp[i];
          }
          return ans;
    
    }
};