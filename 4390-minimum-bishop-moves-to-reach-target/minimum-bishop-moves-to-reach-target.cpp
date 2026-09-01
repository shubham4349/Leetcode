class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        // bishop-> camel
        // bas daigonally chalta h
        
        // agar bishop black tile pe h, to total jitne black tile h vo usko acess kr skta h.
        int x1=source[0];
        int y1=source[1];
        int x2=target[0];
        int y2=target[1];
        // case 1-> single move-> same diag
        
        if(abs(source[0]-target[0])==abs(source[1]-target[1])) return 1;

        // bishop koisi bhi smae color box atmost 2 move me kr hi skta h to ans, 1 ya 2 hi hoga

        // jitne blaxk box h, unke coorinate ka sum%2=0 h
        // and white walo ka sum%2==1 h yani odd posn
        if((x1+y1)%2==(x2+y2)%2)  return 2;

        return -1;
    }
};