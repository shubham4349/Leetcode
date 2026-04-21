class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        // since str len=4 h
        // to total 2 swap  ho skte h
        
        // case 1-> abcd bo swap
        // cbad -> swap ac
        // adcb -> swap db
        // cdab -> swap ac and db
        string temp=s1;
        if(s1==s2) return true;
        string swapAC="",swapBD="",swapABCD="";

        swap(temp[0],temp[2]);
        swapAC=temp;
        temp=s1;

        swap(temp[1],temp[3]);
        swapBD=temp;
        temp=s1;

         swap(temp[0],temp[2]);
        swap(temp[1],temp[3]);
         swapABCD=temp;
         temp=s1;

         if(s2==swapAC or s2==swapBD or s2==swapABCD) return true;
         return false;

    }
};