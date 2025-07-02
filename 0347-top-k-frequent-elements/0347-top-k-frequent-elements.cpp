class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> vp;
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for (auto x:mp){
            vp.push_back({x.second,x.first});
        }
        sort(vp.rbegin(),vp.rend());
        vector<int> a;
        int i=0;
        for (auto x:vp){
            a.push_back(x.second);
            i++;
            if(i==k) break;
        }
        return a;
    }
};