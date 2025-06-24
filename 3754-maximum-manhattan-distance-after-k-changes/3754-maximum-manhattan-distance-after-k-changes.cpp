class Solution {
public:
    int maxDistance(string s, int k) {
        int n=s.size();
        int N=0,E=0,W=0,S=0,num=0,mx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N') N++;
            else if(s[i]=='W') W++;
            else if(s[i]=='S') S++;
            else E++;
            int minNS=min(N,S),minEW=min(E,W);
            num=abs(N-S)+abs(E-W)+2*min(k,minEW+minNS);
            mx=max(mx,num);
            
        }
        
        
        return mx;
    }
};