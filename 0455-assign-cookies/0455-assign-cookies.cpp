class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size(),ans=0,j=0;

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            while(j<m && s[j]<g[i]) j++;
            if(j<m && s[j]>=g[i]){
             ans++;
             j++;
            }
            if(j>=m) break;
        }
        return ans;
    }
};