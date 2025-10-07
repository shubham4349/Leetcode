class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n=nums.size();
        int peri=0;
        int largest=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0; i<=n-3; i++){
             int a=nums[i];
             int b=nums[i+1];
             int c=nums[i+2];
             if(a+b>c and b+c>a and a+c>b){
                peri=a+b+c;   
             }
             largest=max(largest,peri);
        }
        return largest;
    }
};