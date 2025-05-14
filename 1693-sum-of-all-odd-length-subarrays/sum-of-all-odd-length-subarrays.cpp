class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();

        int totalsum = 0;

        for(int i =0; i<n; i++){
            int currsum = 0;
            for(int j = i; j<n; j++){
                currsum += arr[j];

                int window = j-i+1;
                if(window%2!=0) totalsum += currsum;
            }
        }
        return totalsum;
    }
};