class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i])){
                int ans = Math.abs(i-map.get(nums[i]));
                if(ans <= k){
                    return true;
                }
            }
            // else{
                map.put(nums[i],i);
            // }
        }
        // if(ans <= k){
        //     return true;
        // }
        return false;
    }
}