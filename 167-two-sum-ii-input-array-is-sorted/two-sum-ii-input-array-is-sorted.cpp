class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
       // sorted-> so we can use bnary search


       int n=numbers.size();
       int i=0;
       int j=n-1;
       while(i<j){
        int sum=numbers[i]+numbers[j];
        if(sum==target) return{i+1,j+1};
        else if(sum>target){
            // to sum ko chota kro
            // j kam kro
            j--;
        }else i++;
       }
       return {-1,-1};
    }
};