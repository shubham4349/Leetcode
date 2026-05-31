class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        // agar planet ka mass already maxm aster ke mass se jyafa h-> true
        // bas maxm ke liye check kro
        // check kr agar sare aster ka mass addup hoke maxm>= hota h ki nhi
        // issue arrangement ka aayega
        // eg - p=1, a=3,100,104
        // isme addup hoke to hojayega, lekin 1>3-> so planet kabhi 3 add hi nhi krpayega
        int n=asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        int maxm=asteroids[n-1];

        long long current=mass; // current mass
        for(int i=0; i<=n-2;i++){
            if(current>=asteroids[i]){
                current+=asteroids[i];
            } else {
                return false;
            }
        }
        if(current>=asteroids[n-1]){
            return true;
        }
        return false; // mass asteroid se chota hi reh gya

    }
};