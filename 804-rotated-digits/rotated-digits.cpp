class Solution {
public:
    bool valid(string& num){
        for(int i=0; i<num.size(); i++){
            if(num[i]=='3' or num[i]=='4' or num[i]=='7') return false;
        }
        return true;
    }
    int rotatedDigits(int n) {
        // 0,2,8 ko rortate krne pe 0,2,8 hi rhega
        // 2-> 5 nd 5-> 2, similaely 6->9 and 9->6
        // 3,4,7 rortate hone pe ek invalid ban jate h-> so un numbers ko cnt mt krna

        // bas 2,5,6,9 wale digits hi rotate krke diffrent bnte h
        // so 1 se n ke bich me jo bhi 2,5,6,9 wale numbers h unhe cnt kr
        if(n==1) return 0;
        // brute
        int cnt=0;
        for(int i=1; i<=n; i++){
            string num=to_string(i);
            for(int j=0; j<num.size(); j++){
                if(valid(num)){
                    if(num[j]=='2' or num[j]=='5' or num[j]=='6' or num[j]=='9'){
                    cnt++;
                    break;
                     }
                }
               
            }
        }
        return cnt;

    }
};