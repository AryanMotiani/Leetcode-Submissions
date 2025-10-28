class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        int n=jewels.size(),m=stones.size();
        for(int i=0;i<n;i++) mp[jewels[i]]++;
        int ans=0;
        for(int i=0;i<m;i++) if(mp.count(stones[i])) ans++;
        return ans;
    }
};