class Solution {
public:
    int findClosest(int x, int y, int z) {

        int xz = abs(x-z);
        int yz = abs(y-z);

        if(xz<yz) return 1;
        else if(yz<xz) return 2;
        else return 0;
        
    }
};