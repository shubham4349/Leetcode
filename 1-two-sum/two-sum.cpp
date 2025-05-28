class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
         unordered_map<int,int> map;
        // hasmaps approach:
        // traverse the array.
        // for every nums[i] check if (target-nums[i]) exist in array or not.  
        // jese for 2 (check 9-2 = 7 exist or not) by that u'll find ans

        for(int i =0; i<n; i++){
            int comp = target-nums[i];

            if(map.count(comp)){
                return  {map[comp],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
    // map me pehle 2,0 aaya.
    // then 7 ke liye comp find kiya (2) aur vo map me mila
    // so 2 aur 7 ka idx return kradiya
};