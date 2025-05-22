class Solution {
public:
    bool checkPowersOfThree(int n) {

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

        // just looked up what ternary repre is, and coded it all by myself \U0001f601
    }

};