class Solution {
public:
    int countPoints(string rings) {
         // if kisi bhi B,R,G ke aage same number h to cnt++

         unordered_map<int,set<char>> mp;

         for(int i=0; i<rings.length(); i+=2){   // map
            // if(isdigit(rings[i])) {             // 0- r,g
            //     int num= rings[i]-'0';            // 1- r,b,g --> cnt yha badhgea
            //     mp[num].insert(rings[i-1]});
            // }
            char color=rings[i];
            int num= rings[i+1]-'0';
            mp[num].insert(color); // think of it as ki 0 ke sath r,g wala set associated
            // mp.insert({num,color}); ths giver error
            
         }
         int cnt=0;
         for(auto it: mp){
            if(it.second.size() ==3 ) cnt++;
         }
         return cnt;

    }
};