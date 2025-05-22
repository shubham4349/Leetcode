class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        // int x;
        // for(int i =0; i<=16; i++){
        //     if(pow(3,i)>=n){
        //         x = i-1;
        //         break;
        //     } 
        // }
        // // yani n=91 ke liye, x hmara 4 hua as, 3^4 = 81;
        // // to uske ke liye hm maxm 4 power tak jayenge;

        //  int diff = n- pow(3,x); // 10
        //  // so ab chek kr ki if diff can be written in power of threes or not.
        // for(int i =0; i<=x; i++){

           
        // }
        // while(diff>=pow)


        // while(n>1){
        //     n = n/3;
        //     if(n<3 and n!=1) return false;
        // }
        // return true;
        // int x;
        // for(int i =0; i<=16; i++){
        //     if(n==pow(3,i)) return true;
        //     else if(n<=pow(3,i)) x = i-1;
        // }
        // for(int i =0; i<=x; i++){

        // }
        // if(n%3==2 or n%3==0)

        // finding ternary representation of N
        long long rem=0;
        while(n>0){
            int x = n%3;
            rem = rem*10 +x;
            n= n/3;

        }
        vector<int> temp;

        while(rem>0){
            int digit = rem%10;
            temp.push_back(digit);
            rem = rem/10;
        }
        for(int i =0; i<temp.size(); i++){
            if(temp[i]==2) return false;
        }
        return true;


    }

};