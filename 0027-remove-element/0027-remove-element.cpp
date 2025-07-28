class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),ans=0,r=n-1;
        // if(n==1){
        //     if(val==nums[0]) return 0;
        //     else return 1;
        // }
        for(int i=0;i<n;i++){
            
            if(nums[i]==val){
                ans++;
                if(r<=i) break;
                while(nums[r]==val) {
                    r--;
                    ans++;
                    if(r<=i) break;
                }
                swap(nums[r],nums[i]);
                r--;
            }
            if(r<=i) break;
            
        }
        return n-ans;
    }
};