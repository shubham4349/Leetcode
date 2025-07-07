#define ll long long int
class Solution {
public:
    long long smallestNumber(long long num) {
        
        string number = to_string(num);
        int n=number.length();
       
        ll ans;
        if(num>0){ // ye postive ke liye
             sort(number.begin(), number.end());
            if(number[0]!='0') ans= stoll(number);
            else {
                for( ll i=0; i<n; i++){
                    if(number[i]!='0'){
                        swap(number[0], number[i]);
                        break;
                    }
                }
                ans=stoll(number);
               
            }
        }else{ // handling negative numbers
           sort(number.begin(), number.end(), greater<int>());
           ans= stoll(number)*-1;
        }
       //  return stoll(number);
       return ans;
    }
};