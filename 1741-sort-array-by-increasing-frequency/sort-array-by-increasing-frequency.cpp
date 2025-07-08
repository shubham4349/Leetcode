class Solution {
public:
// custom sort-> yani using comparator
//    static  unordered_map<int,int> count;
//      static  bool cmp(int a, int b){
//         if(count[a]==count[b]) return a>b;
//         return count[a]<count[b];
//     }
    vector<int> frequencySort(vector<int>& nums) {
     unordered_map<int,int> count;
        for(int i: nums){
            count[i]++;
        }
        // using comparator for customizing sort function 
        // lambda comparator
        sort(nums.begin(), nums.end(), [&](int a, int b){
              if(count[a]==count[b]) return a>b;
              return count[a]<count[b]; // jiska count kam vo pehle aayega
             }
        );


        return nums;
    }
};