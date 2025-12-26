class Solution {
public:
    int magicalString(int n) {
        string start="122";
        // pattern->
        // third ch=2, last char=2...means 1 , 2 bar append hoga->12211
        // 4th ch=1, last ch=1, means 2, 1 bar append hoga->122112
        // 5th=1, last ch==2, means 1, 1 time-> 1221121
        // 6th=2, last=1, means 2 -> 2 ime-> 122112122

        if(n==1) return 1;

        for(int i=2; i<n; i++){
            int x=start[i]-'0'; // kitne time push krna h
            char ch=(start.back()=='1'?'2':'1'); // agar 1 h to 2 ko push kro, and Vice versa
            while(x--) start+=ch; 
        }
        int cnt1=0;
        for(int i=0; i<n; i++){
            if(start[i]=='1') cnt1++;
        }
        
        return cnt1;
    }
};