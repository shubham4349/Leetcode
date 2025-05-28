
     class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        
         long long power =1;

        while(power <n) {
            power *= 2; // power ko 2 se multiply krte jao
        }

        if(power==n) return true;
        return false;
    }
};

 