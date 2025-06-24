class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=1,ans=nums[0];
        for (int i=1;i<n;i++){
            if(ans==nums[i]) cnt++;
            else cnt--;
            if(cnt==0){
                ans=nums[i];
                cnt=1;
            }
        }
        return ans;
    }
};