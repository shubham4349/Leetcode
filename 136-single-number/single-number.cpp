#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        
        for(int i =0; i<n;i++){
            int count =0;

            for(int j =0; j<n; j++){
                if(i!=j and nums[i]==nums[j]){
                    count++;
                }

            }
            if(count==0) return nums[i];
        }
        return -1;
    }
};
