class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while(left < right){
            int mid = (left + right) / 2;
            if(target > nums[mid]) {
                left = mid + 1;
            }
            else if(target < nums[mid]) {
                right = mid;
            }
            else if(target == nums[mid]) {
                return mid;
            }
        }
        return left;
        // ALT SOLUTION:
        // auto lo = lower_bound(nums.begin(), nums.end(), target);
        // int ans=lo-nums.begin();
        // return ans;
    }
};