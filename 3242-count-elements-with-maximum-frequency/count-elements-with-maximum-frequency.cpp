class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     
     int n=nums.size();
     unordered_map<int,int> mp;

     int maxfreq=0;
     int elemCount=0;

     for(int i =0; i<nums.size(); i++){
         mp[nums[i]]++; // sare key ki count badh rhi h
         maxfreq = max(maxfreq, mp[nums[i]]); // max freq nikal li    // if(mp[nums[i]]>maxfreq) maxfreq=mp[nums[i]]
      
         
     }
     // ab check kro kin elements ki count maxfreq ke barabar h
     for(int i =0; i<nums.size(); i++){
        if(mp[nums[i]]==maxfreq) elemCount++;
     }
     return elemCount;


    }
};