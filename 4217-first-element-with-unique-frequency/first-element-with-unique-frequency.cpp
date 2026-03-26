class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n=nums.size();
        map<int,int> cnt; // num,cnt
        for(int num:nums) cnt[num]++;
        map<int,int> cntofcnt;
        for(auto it: cnt){
            cntofcnt[it.second]++;
        }
        // int uniqFreq=-1;
        // for(auto it:cntofcnt){
        //      if(it.second==1){ // unik freq
        //          uniqFreq=it.first;
        //          break;
        //      }
        // }
        // if(uniqFreq==-1) return -1;
        // for(int num:nums){
        //     if(cnt[num]==uniqFreq) return num;
        // }
        // return -1;
        for(int num:nums){
            if(cntofcnt[cnt[num]]==1)// cnt ke cnt ki value 1 h(unik)
             {
                return num;
             }
        }
        return -1;
    }
};