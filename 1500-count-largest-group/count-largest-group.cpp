class Solution {
public:
    int digitsum(int num){
        int sum=0;
        while(num>0){
            int digit= num%10;
            sum += digit;
            num /=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        
        // hash map banao
        // key- digit
        // val- digitsum
        if(n<=9) return n;
        unordered_map<int,int> count;
        int maxcount=0;
        for(int i=1; i<=n; i++){
            //  map[i] = digitsum(i);
            int sum= digitsum(i);
            count[sum]++; // jinte same count h vo count honge
            maxcount= max(maxcount, count[sum]);
        }
        int grpcount=0;
        //  for(int i=1; i<=n; i++){
        //     int a= digitsum(i);
        //     if(count[a]==maxcount) grpcount++;
        // }
        // return grpcount;

        // 1->2
        // 2->2
        //.....8->1, 9->1

        for(auto it=count.begin(); it!=count.end(); it++){
            if(it->second == maxcount) grpcount++;
        }
        return grpcount;

    }
};