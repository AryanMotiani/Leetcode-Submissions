class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int l=0,n=nums.size(),ans=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp.size()>k){
                while(mp.size()>k && l<i){
                    mp[nums[l]]--;
                    if(mp[nums[l]]==0) mp.erase(nums[l]);
                    l++;
                }   
            }
            ans+=i-l+1;
        }
        mp.clear();
        l=0;
        if(k>1){
         for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp.size()>k-1){
                while(mp.size()>k-1 && l<i){
                    mp[nums[l]]--;
                    if(mp[nums[l]]==0) mp.erase(nums[l]);
                    l++;
                }     
            }
            ans-=i-l+1;
        }
        }
        return ans;
    }
};