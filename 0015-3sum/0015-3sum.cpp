class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set <vector<int>> a;
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0) {
                    a.insert({nums[i],nums[j],nums[k]});
                    if(nums[k]==nums[k-1]) k--;
                    else j++;

                }
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++;
            }
        }
        vector<vector<int>> ans;
        for(auto x:a) ans.push_back(x);
        return ans;
    }
};