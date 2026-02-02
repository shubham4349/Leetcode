class Solution {
public:
    bool doesAliceWin(string s) {
        // alice-odd no-> turn 1
        // bob- even no-> turn 2
         
         // agar vowel h hi nhi -> bob wins
        // else sare case me alice jeetegi
        // coz ex-> no of vowels 1 h...so odd h alice remove krdegi, bob kuch nhi krpayega
        // ex->no of vowels 2 h- alice 1 remve kregi...lekiin bob kuch remove hni rega

        for(char& ch:s){
            if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') {
                return true; // alice jeetegi
            }
        }
        return false; 
        
    }
};