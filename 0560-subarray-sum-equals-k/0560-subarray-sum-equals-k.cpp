class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),ans=0;
        unordered_map<int,int> mp;
        vector<int> prf;
        prf.push_back(0);
        for(int i=0;i<n;i++){
            prf.push_back(prf[prf.size()-1]+nums[i]);
        }
        for(int i=0;i<n+1;i++){
            if(mp.find(prf[i]-k)!=mp.end()) ans+=mp[prf[i]-k];
            mp[prf[i]]++;
        }
        return ans;


    }
};