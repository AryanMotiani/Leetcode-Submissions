class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        int n=points.size();
        long long mod=1000000007;
        unordered_map <int,long long> mp;
        for(int i=0;i<n;i++){
            mp[points[i][1]]++;
        }
       
        long long tmp=0,ans=0,prev=0;
        for(auto x:mp){
            tmp=((x.second)*(x.second-1))/2;
            tmp%=mod;
            if(prev==0) prev+=tmp;
            else{
                ans+=(tmp*prev)%mod;
                prev+=tmp;
            }
            ans%=mod;
        }
        int t=ans%mod;
        return t;
    }
};