class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        vector<int> prf(n+1),suf(n+1);
        prf[0]=0;
        suf[0]=0;
        for(int i=0;i<n;i++){
            prf[i+1]=prf[i]+cardPoints[i];
            suf[i+1]=suf[i]+cardPoints[n-i-1];
        }
        int ans=0;
        for(int i=0;i<n+1;i++){
            if(k-i<n+1 && k-i>=0) ans=max(ans,prf[i]+suf[k-i]); 
        }
        return ans;
    }
};