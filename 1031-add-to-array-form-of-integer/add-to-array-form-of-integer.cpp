class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int n=num.size();
       int carry=0;
       for(int i=n-1; i>=0; i--){
           int total=k%10+carry; // total jo num[i] me add hoga
           num[i]+=total;
           carry=num[i]/10; 
           num[i]%=10; // num[i]=9, k=9 ..so num[i]=8,and 1 carry 
           k=k/10;
       }
       while(k>0){ // arr=123, k=48222 -> 48345
        //  num.insert(num.begin(),k%10); 
        //  k/=10;
        int total=(k%10)+carry;
        num.insert(num.begin(),total%10); // total=12...to 2 add ho, 1 carry bne
        carry=total/10;
        k/=10;
       }
        if(carry>0){ // for exmple 3
        num.insert(num.begin(),carry);
       }
       return num;
    }
};