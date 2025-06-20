class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),mx=nums[0],cur=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>cur && cur<=0){
                cur=nums[i];
            }
            else{
                cur+=nums[i];
            }
            mx=max(mx,cur);
            
        }
        return mx;
    }
};