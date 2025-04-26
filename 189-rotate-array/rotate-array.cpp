class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
       k = k%n; 
    reverse(nums,0, n-1);    //first poora array reverse
    reverse(nums,0,k-1);  // then first k elements
    reverse(nums, k,n-1);    // then remaining elements
       
    }
    void reverse  (vector<int>& nums, int low, int high){
            while(low <high){
                 int temp = nums[low]; // swap kro arr[low], arr[high]
                  nums[low] =  nums[high];
                  nums[high] = temp;

                  low++;
                  high--;
            }

    }
};