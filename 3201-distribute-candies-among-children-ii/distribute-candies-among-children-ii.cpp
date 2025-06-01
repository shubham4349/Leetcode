class Solution {
public:
    long long distributeCandies(int n, int limit) {
        int count=0;
         
        // lets say: n=5 and limit=3

        // and there's 1 child only

        // so we can either give him 0 candy, or 1, or 2 or 3
        // min = 0 candy de sakte
        // maxm = 3 candy
        // total ways = [0,3] = 3-0+1 = 4 ways(0,1,2,3)  

        // mik 33:32

        // child1: ko aga x diya
        // remaining = n-x
        // child 2 + child 3 = ke liye n-x candies bache
        // child 2 ko max kitna de sakte- limit
        // child 3 ko max kitna de sakte- limit

        // Now remaing candy for child1 = n-2*limit. --minm for child1
        // max for child 1 is obviously limit;

        long long ways=0;
        int min_ch1 = max(0,n-2*limit);
        int max_ch1 = min(n, limit);

        for(int i =min_ch1; i<=max_ch1; i++){

            int N = n-i; // for ch1, and ch2
            int min_ch2 = max(0, N-limit);
            int max_ch2 = min(N,limit);

            ways += max_ch2-min_ch2+1;
        }
        
       return ways;

    }
};