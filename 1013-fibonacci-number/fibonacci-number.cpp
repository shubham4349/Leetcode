class Solution {
public:
    int fib(int n) {
        //T.C-O(N) S.C-O(1)
      
        if (n <= 1) return n;
        
        int prev = 0, curr = 1;
        for (int i = 2; i <= n; i++) {
            int next = prev + curr;
            prev = curr;
            curr = next;
        }
        return curr;
    }
};