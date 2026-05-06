class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;
        while(n!=1 and seen.count(n)==0){ // set me vo number nhi aaya h kbhi, 
            seen.insert(n);
             int sqr=0;
             while(n>0){
                 int digit=n%10;
                 sqr+=digit*digit;
                 n=n/10;
              }
              n=sqr;
        }
        return n==1;
       
    }
};